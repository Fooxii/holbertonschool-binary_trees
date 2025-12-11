#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: pointer to the new node, NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *newnode;
int cpvalue;
if (!parent)
{
return ((void *)0);
}

newnode = malloc(sizeof(binary_tree_t));
if (!newnode)
{
return ((void *)0);
}

cpvalue = value;
newnode->parent = parent;
newnode->n = cpvalue;
newnode->left = (void *)0;
newnode->right = (void *)0;
return (newnode);
}
