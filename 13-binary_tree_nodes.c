#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least
 * 1 child in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: number of nodes with atleast 1 child, 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0;
if (!tree)
{
return (0);
}

if (tree->left != (void *)0 || tree->right != (void *)0)
{
count++;
}
count += binary_tree_nodes(tree->left);
count += binary_tree_nodes(tree->right);

return (count);
}
