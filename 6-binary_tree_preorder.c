#include "binary_trees.h"
/**
 * binary_tree_preorder -Printing tree elements through pre-order traversal
 * @tree: is a reference to the tree's root node that has to be traversed.
 * @func: function to use
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
