#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - function that inserts a node as the left-child of another node
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

if (parent->left != (void *)0)
{
leftchild->left = parent->left;
parent->left = leftchild;
}
else
{
parent->left = leftchild;
leftchild->left = (void *)0;
}
leftchild->n = cpvalue;
leftchild->right = (void *)0;

return (leftchild);
}
