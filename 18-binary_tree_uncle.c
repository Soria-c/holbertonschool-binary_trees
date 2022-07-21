#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the uncle of a node
 *
 * @node: is a pointer to the node to find the uncle
 * Return: If node has no uncle
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->right != node)
		return (node->parent->right);
	return (node->parent->left);
}

/**
 * binary_tree_uncle - function that finds the uncle of a node
 *
 * @node: is a pointer to the node to find the uncle
 * Return: node has no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
