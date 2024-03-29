#include "binary_trees.h"
/**
 * tree_is_perfect - function that says if a tree is perfect or not
 * it has to be the same quantity of levels in left as right, and also
 * each node has to have 2 nodes or none
 * @tree: tree to check
 * Return: 0 if is not a perfect or other number that is the level of height
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int left_p = 0, right_p = 0;

	if (tree->left && tree->right)
	{
		left_p = 1 + tree_is_perfect(tree->left);
		right_p = 1 + tree_is_perfect(tree->right);
		if (right_p == left_p && right_p != 0 && left_p != 0)
			return (right_p);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - perfect or not a tree
 * @tree: tree to check
 * Return: 1 is it is or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int results = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		results = tree_is_perfect(tree);
		if (results != 0)
		{
			return (1);
		}
		return (0);
	}
}
