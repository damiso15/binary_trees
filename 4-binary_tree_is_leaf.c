#include "binary_trees.h"

/**
 * binary_tree_is_leaf - A function that check if a node is a leaf
 * @node: a pointer to the node to check
 * Return: 1 if node us a leaf otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return 0;

	return (node->left == NULL && node->right == NULL);
}
