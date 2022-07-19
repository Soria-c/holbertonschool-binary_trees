#include "binary_trees.h"

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