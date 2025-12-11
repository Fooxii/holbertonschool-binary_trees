#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - function that checks if a given node is a root
 * @node: a pointer to the node being checked
 * Return: 1 if node is root, 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
if (!node)
{
return (0);
}

if (node->parent == (void *)0)
{
return (1);
}
else
{
return (0);
}
}
