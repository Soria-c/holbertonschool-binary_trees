#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{

    if (!tree)
        return (0);
    
    if ((tree->right || tree->left))
        return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1);
    return (0);
}