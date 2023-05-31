#include "binary_trees.h"

/**
 * binary_trees_ancestor - A function that finds the lowest common
 *				ancestors of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the 2 given nodes.
 * 		If no common ancestor return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *node1 = first;
	const binary_tree_t *node2 = second;

	if (first ==NULL || second == NULL)
		return (NULL);

	while (node1 != node2)
	{
		node1 = node1->parent;
		node2 = node2->parent;

		if (node1 == NULL && node2 == NULL)
			return (NULL);
		if (node1 == NULL)
			node1 = second;
		if (node2 == NULL)
			node2 = first;
	}

	return ((binary_tree_t *)node1);
}
