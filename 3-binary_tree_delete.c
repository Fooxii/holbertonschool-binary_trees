#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: pointer to tree being deleted
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
binary_tree_t *temp;
if (!tree)
{
return;
}
temp = malloc(sizeof(binary_tree_t));
if (!temp)
{
return;
}
temp = tree;
binary_tree_delete(temp->left);
binary_tree_delete(temp->right);
free(temp);
free(tree);
}
