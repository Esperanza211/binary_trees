#include "binary_trees.h"

/**
 * binary_tree_is_root - Feature that determines if a node is a root
 * @node: Node to check
 * Return: 0 if is not a root, 1 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	else
		return (1);
}
