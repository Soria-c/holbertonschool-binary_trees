#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node
 *
 * @parent: is a pointer to the node to insert the right-child
 * @value: is the value to store in the new node
 * Return: function must return a pointer to the created node or null
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	if (!parent->right)
		parent->right = new_node;
	else
	{
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->right->parent = new_node;
	}
	return (new_node);
}
