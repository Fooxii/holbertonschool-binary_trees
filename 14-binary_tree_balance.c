#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor (height of left subtree - height of right subtree)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
size_t left_h = 0, right_h = 0;
size_t lh_left, lh_right, rh_left, rh_right;

if (!tree)
return (0);

if (tree->left)
{
lh_left = tree->left->left ? 1 + binary_tree_height(tree->left->left) : 1;
lh_right = tree->left->right ? 1 + binary_tree_height(tree->left->right) : 1;
left_h = (lh_left > lh_right ? lh_left : lh_right);
}

if (tree->right)
{
rh_left = tree->right->left ? 1 + binary_tree_height(tree->right->left) : 1;
rh_right = tree->right->right ? 1 + binary_tree_height(tree->right->right) : 1;
right_h = (rh_left > rh_right ? rh_left : rh_right);
}

return ((int)left_h - (int)right_h);
}
