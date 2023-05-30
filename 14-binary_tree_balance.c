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
	right_height = tree->right ? 1 +binary_tree_height(tree->right) : 1;

	return (left_height > right_height ? left_height : right_height);
}


/**
 * binary_tree_balance - A function that measures the balance factor of a
 *			binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: if tree is NULL return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor = 0;

	if (tree == NULL)
		return (balance_factor);

	balance_factor = binary_tree_height(tree->left) -
		binary_tree_height(tree->right);

	return (balance_factor);
}
