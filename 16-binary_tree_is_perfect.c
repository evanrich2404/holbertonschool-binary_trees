#include "binary_trees.h"

/**
 * countNodes - counts the number of nodes in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes in the tree, or 0 if tree is NULL
 */
int countNodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + countNodes(tree->left) + countNodes(tree->right));
}

/**
 * heightT - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree, or 0 if tree is NULL
 */
int heightT(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);
	return (1 + heightT(tree->left));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int nodes, h, i, num = 2;

	if (tree == NULL)
		return (0);
	nodes = countNodes(tree);
	h = heightT(tree);
	for (i = 0; i < h; i++)
		num *= 2;
	num--;
	if (nodes == num)
		return (1);
	return (0);
}
