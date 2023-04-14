#include "binary_trees.h"

/**
 * binary_tree_height_2 - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height_2(const binary_tree_t *tree)
{
	size_t binRight = 0, binLeft = 0;

	if (tree == NULL)
		return (0);

	binRight = binary_tree_height_2(tree->right);
	binLeft = binary_tree_height_2(tree->left);
	if (binRight > binLeft)
		return (binRight + 1);
	else
		return (binLeft + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_Total = 0, right_Total = 0, cmp = 0;

	if (tree == NULL)
		return (0);

	right_Total = binary_tree_height_2(tree->right);
	left_Total = binary_tree_height_2(tree->left);
	cmp = left_Total - right_Total;
	return (cmp);
}
