#include "binary_trees.h"

/**
 * binary_tree_sibling2 - function that finds the sibling of a node
 * @node: pointer to the node being used to find its sibling
 * Return: pointer to the sibling node, NULL if no sibling
 */

binary_tree_t *binary_tree_sibling2(binary_tree_t *node)
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

return (binary_tree_sibling2(node->parent));
}
