#include "binary_trees.h"
/**
 * binary_tree_depth - determines a node's depth in a binary tree.
 * @tree: a reference to the depth-measurement node.
 * Return: 0 is it is the root or number of depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
