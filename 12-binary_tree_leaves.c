#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the binary tree's leaves.
 * @tree: a pointer to the tree's root node where the leaves are to be counted.
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0, left_leaf = 0, right_leaf = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_leaf = binary_tree_leaves(tree->left);
		right_leaf = binary_tree_leaves(tree->right);
		leaves = left_leaf + right_leaf;
		return ((!left_leaf && !right_leaf) ? leaves + 1 : leaves + 0);
	}
}
