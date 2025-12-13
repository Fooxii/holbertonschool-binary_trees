#include "binary_trees.h"

/**
 * check_leaf_levels - helper function to check if all
 * leaf nodes are at the same level
 * @tree: pointer to the root node of the tree
 * @level: current level in the tree
 * @height: height of the tree
 * Return: 1 if all leaf nodes are at the same level, 0 otherwise
 */

int check_leaf_levels(const binary_tree_t *tree, int level, int height)
{
if (!tree)
return (1);

if (!tree->left && !tree->right)
return (level == height);

return (check_leaf_levels(tree->left, level + 1, height) &&
check_leaf_levels(tree->right, level + 1, height));
}

/**
 * binary_tree_height2 - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of binary tree
 */

int binary_tree_height2(const binary_tree_t *tree)
{
int left_h, right_h;
if (!tree || (!tree->left && !tree->right))
{
return (0);
}

left_h = binary_tree_height2(tree->left);
right_h = binary_tree_height2(tree->right);

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
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 if perfect, 0 if NULL or not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int height;

if (!tree)
return (0);

if (!binary_tree_is_full2(tree))
return (0);

height = binary_tree_height2(tree);

return (check_leaf_levels(tree, 0, height));
}
