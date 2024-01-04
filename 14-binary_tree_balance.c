#include "binary_trees.h"

/**
 * binary_tree_balance - evaluates a binary tree's balance factor.
 * @tree: reference to the tree's root node to calculate the balancing factor.
 * Return: the height or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	/* the Balance Factor is the difference between */
	/* the heights of left and right subtrees */
	return (0);
}
/**
 * binary_tree_height - determines a binary tree's height.
 * @tree: a pointer to the tree's root node that the height can be determined.
 * Return: the height or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_h = 0, right_h = 0;

		left_h = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		right_h = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((left_h > right_h) ? left_h : right_h);
	}
	return (0);
}
