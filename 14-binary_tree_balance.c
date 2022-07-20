#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance
 *
 * factor of a binary tree
 *
 * @tree: is a pointer to the root node of the tree
 * to measure the balance factor
 * Return: is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left && tree->right)
		return (2);
	else if (!tree->left && !tree->right)
		return (0);
	return (-1);
}
