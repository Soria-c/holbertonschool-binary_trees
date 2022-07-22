#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 * @tree: is a pointer to the root node of the tree to check
 * Return: is NULL, your function must return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
        int height_l = 0;
        int height_r = 0;

        if (tree == NULL)
                return (0);
        if (!tree->left && !tree->right)
                return (1);
        if ((tree->left && !tree->right) || (!tree->left && tree->right))
                return (0);
        height_l = binary_tree_is_full(tree->left);
        height_r = binary_tree_is_full(tree->right);
        return (height_l != height_r ? 0 : 1);
}
