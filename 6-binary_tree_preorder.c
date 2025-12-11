#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - function that goes through a binary tree
 * using pre-order traversal
 * @tree: pointer to the root node of the tree
 * @func: pointer to a function to call for each node
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == (void *)0 || func == (void *)0)
{
return;
}

func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
