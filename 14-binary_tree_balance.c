#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of the tree, 0 if tree is NULL or a leaf
 */

int binary_tree_height_v2(const binary_tree_t *tree)
{
int left_h, right_h;

if (!tree || (!tree->left && !tree->right))
return (0);

left_h = binary_tree_height_v2(tree->left);
right_h = binary_tree_height_v2(tree->right);

if (left_h > right_h)
{
return (left_h + 1);
}
else
{
return (right_h + 1);
}
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor (left height - right height), 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int left_h, right_h;
if (!tree)
return (0);

left_h = binary_tree_height_v2(tree->left);
right_h = binary_tree_height_v2(tree->right);

return (left_h - right_h);
}
