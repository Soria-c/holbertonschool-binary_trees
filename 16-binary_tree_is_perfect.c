#include "binary_trees.h"

/**
 * binary_tree_size - function that checks if a binary tree is perfect
 *
 * @tree: is a pointer to the root node of the tree to check
 * Return: is NULL, your function must return new node
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_height - function that checks if a binary tree is perfect
 *
 * @tree: is a pointer to the root node of the tree to check
 * Return: is NULL, your function must return new node
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

/**
 * _pow - function that checks if a binary tree is full
 *
 * @n: Pointer
 * Return: Return the height
 */

size_t _pow(size_t n)
{
	if (!n)
		return (1);
	return (2 * _pow(n - 1));
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is full
 *
 * @tree: Pointer
 * Return: Return the height
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t size, height, max_nodes;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	max_nodes = _pow(height + 1) - 1;

	return (size == max_nodes ? 1 : 0);
}
