#include "binary_trees.h"
/**
 * binary_tree_delete - Recursion is used to free an entire tree;
 * it releases a node when its left and right nodes are NULL.
 * @tree: a pointer to the root node of the tree to delete.
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		free(tree);
	}

}
