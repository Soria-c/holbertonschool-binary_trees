#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 1;

	if (tree == NULL)
		return (0);

	count += binary_tree_size(tree->left);
	count += binary_tree_size(tree->right);
	return (count);
}
