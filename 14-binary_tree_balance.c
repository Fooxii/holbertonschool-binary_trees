#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the 
 * balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor of a binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
size_t left_h = 0, right_h = 0;
int balance;

if (!tree)
return (0);

if (tree->left)
{
left_h = 1;
left_h += binary_tree_balance(tree->left);
}

if (tree->right)
{
right_h = 1;
right_h += binary_tree_balance(tree->right);
}

balance = (int)(left_h - right_h);

return (balance);
}
