#include "binary_trees.h"
/**
 * binary_tree_size - calculates a binary tree's size.
 * @tree:a pointer to the tree's root, will be used to calculate the size.
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, right_s = 0, left_s = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_s = binary_tree_size(tree->left);
		right_s = binary_tree_size(tree->right);
		size = right_s + left_s + 1;
	}
	return (size);
}
