#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
    if (!tree)
        return (0);
	if (!tree->right && !tree->left)
		return (0);
	if (tree->right)
		return (binary_tree_height(tree->right) + 1);
	return (binary_tree_height(tree->left) + 1);
}