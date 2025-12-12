#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor (left height - right height)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
size_t left_h = 0, right_h = 0;
int balance;

if (!tree)
return (0);

if (tree->left)
{
size_t lh_left = 0, lh_right = 0;
if (tree->left->left)
lh_left = 1 + binary_tree_balance(tree->left->left);
if (tree->left->right)
lh_right = 1 + binary_tree_balance(tree->left->right);
left_h = (lh_left > lh_right ? lh_left : lh_right) + 1;
}

if (tree->right)
{
size_t rh_left = 0, rh_right = 0;
if (tree->right->left)
rh_left = 1 + binary_tree_balance(tree->right->left);
if (tree->right->right)
rh_right = 1 + binary_tree_balance(tree->right->right);
right_h = (rh_left > rh_right ? rh_left : rh_right) + 1;
}

balance = (int)(left_h - right_h);
return (balance);
}
