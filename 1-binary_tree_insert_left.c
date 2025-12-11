#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - function that inserts a node as
 * the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: is the value being stored in the new node
 * Return: pointer to the created node, NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *leftchild;
int cpvalue;

if (!parent)
{
return ((void *)0);
}

leftchild = malloc(sizeof(binary_tree_t));
if (!leftchild)
{
return ((void *)0);
}

cpvalue = value;
leftchild->n = value;
leftchild->parent = parent;
leftchild->left = NULL;
leftchild->right = NULL;

if (parent->left != NULL)
{
leftchild->left = parent->left;
parent->left->parent = leftchild;
}

parent->left = leftchild;

return (leftchild);
}
