#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
