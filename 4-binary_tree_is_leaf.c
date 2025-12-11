#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: is a pointer to the node to check
 * Return: 1 if node is a leaf, 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (!node)
{
return (0);
}

if (node->left == (void *)0 && node->right == (void *)0)
{
return (1);
}
else
return (0);
}
