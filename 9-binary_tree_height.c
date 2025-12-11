#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: void
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_h, right_h;
if (tree == (void *)0)
{
return (-1);
}
left_h = binary_tree_height(tree->left);
right_h = binary_tree_height(tree->right);

if (left_h > right_h)
{
return (left_h + 1);
}
else if (right_h > left_h)
{
return (right_h + 1);
}
}
