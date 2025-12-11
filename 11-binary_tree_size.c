#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: size of binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size, left, right;
if (!tree)
{
return (0);
}

left = binary_tree_size(tree->left);
right = binary_tree_size(tree->right);
size = 1 + left + right;
return (size);
}
