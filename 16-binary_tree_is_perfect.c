#include "binary_trees.h"

/**
 * binary_trees_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 if perfect, 0 if NULL or not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (!tree)
{
return (0);
}

if (binary_tree_is_full(tree) == 0)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
{
return (1);
}
else
{
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
}
