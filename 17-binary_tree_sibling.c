#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node being used to find its sibling
 * Return: pointer to the sibling node, NULL if no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !node->parent)
{
return ((void *)0);
}

if (node->parent->left && node->parent->left != node)
{
return (node->parent->left);
}
if (node->parent->right && node->parent->right != node)
{
return (node->parent->right);
}
return ((void *)0);
}
