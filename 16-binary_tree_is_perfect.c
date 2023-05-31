#include "binary_trees.h"


/**
 * binary_tree_height - A function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: if tree is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	return (left_height > right_height ? left_height : right_height);
}


/**
 * binary_tree_is_perfect - A function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: if tree is NULL return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);

		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}

	return (0);
}


