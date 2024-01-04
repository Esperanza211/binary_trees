#include "binary_trees.h"
/**
 * binary_tree_nodes - yields the number of child-bearing nodes in a tree
 * @tree: reference to tree's root, that the number of nodes can be counted.
 * Return:return 0 if the tree is NULL, and return node count otherwise.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t  node_n = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node_n += ((tree->left || tree->right) ? 1 : 0);
		node_n += binary_tree_nodes(tree->left);
		node_n += binary_tree_nodes(tree->right);
		return (node_n);
	}
}
