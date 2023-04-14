#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if full, 0 if not or if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int fullCheckLeft = 0, fullCheckRight = 0, fullCheck = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	fullCheckLeft = binary_tree_is_full(tree->left);
	fullCheckRight = binary_tree_is_full(tree->right);
	fullCheck = fullCheckLeft - fullCheckRight;
	if (fullCheck)
		return (0);
	return (1);
}
