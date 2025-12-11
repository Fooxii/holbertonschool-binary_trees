#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - function that inserts a node as
 * the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: is the value being stored in the new node
 * Return: pointer to the created node, NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *rightchild;

if (!parent)
{
return ((void *)0);
}

rightchild = malloc(sizeof(binary_tree_t));
if (!rightchild)
{
return ((void *)0);
}

rightchild->n = value;
rightchild->parent = parent;
rightchild->left = NULL;
rightchild->right = NULL;

if (parent->right != NULL)
{
rightchild->right = parent->right;
parent->right->parent = rightchild;
}

parent->right = rightchild;

return (rightchild);
}
