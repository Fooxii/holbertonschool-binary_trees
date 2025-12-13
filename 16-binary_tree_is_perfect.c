#include "binary_trees.h"

/**
 * binary_tree_height_v2 - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of the tree, 0 if tree is NULL or a leaf
 */

int binary_tree_height_v2(const binary_tree_t *tree)
{
int left_h, right_h;

if (!tree)
return (0);

left_h = binary_tree_height_v2(tree->left);
right_h = binary_tree_height_v2(tree->right);

return ((left_h > right_h ? left_h : right_h) +1);
}

/**
 * binary_tree_balance2 - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor (left height - right height), 0 if tree is NULL
 */

int binary_tree_balance2(const binary_tree_t *tree)
{
int left_h, right_h;
if (!tree)
return (0);

left_h = binary_tree_height_v2(tree->left);
right_h = binary_tree_height_v2(tree->right);

return (left_h - right_h);
}

/**
 * binary_tree_is_full2 - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 * Return: 1 if full, 0 if NULL or not full
 */

int binary_tree_is_full2(const binary_tree_t *tree)
{
if (!tree)
{
return (0);
}

if (!tree->left && !tree->right)
{
return (1);
}
if (tree->left && tree->right)
{
return (binary_tree_is_full2(tree->left) && binary_tree_is_full2(tree->right));
}
return (0);
}

/**
 * binary_trees_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 if perfect, 0 if NULL or not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (!tree)
{
return (0);
}
if (binary_tree_is_full2(tree) != 1)
{
return (0);
}
if (binary_tree_balance2(tree) != 0)
{
return (0);
}
return (1);

}
