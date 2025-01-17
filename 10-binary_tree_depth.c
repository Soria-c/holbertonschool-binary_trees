#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of
 *
 * a node in a binary tree
 *
 * @tree: is a pointer to the node to measure the depth
 * Return: is NULL, your function must return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
