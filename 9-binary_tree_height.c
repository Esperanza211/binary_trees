#include "binary_trees.h"

/**
 * binary_tree_height - Function that calculates a binary tree's height
 * @tree: pointer to the tree's root so that the height can be determined.
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			right_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((left_h > right_h) ? left_h : right_h);
	}
}
