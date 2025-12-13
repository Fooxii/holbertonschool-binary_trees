#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node being used to find its uncle
 * Return: pointer to the unclde node, NULL if no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (!node || !node->parent || !node->parent->parent)
{
return ((void *)0);
}

return (binary_tree_sibling(node->parent));
}
