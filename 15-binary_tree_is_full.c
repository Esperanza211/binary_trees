#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: a reference to the tree's root node for verification.
 * Return: If tree is not full, 1. Otherwise, 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (!binary_tree_is_full(tree->left) || !binary_tree_is_full(tree->right))
		return (0);
	else
		return (1);
}
