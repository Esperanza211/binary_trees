#include "binary_trees.h"
/**
 * binary_tree_postorder -Printing tree elements through post-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: function to use
 * Return: if tree or func is NULL, do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
	}
	func(tree->n);
}
