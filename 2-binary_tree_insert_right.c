#include "binary_trees.h"
/**
 * binary_tree_insert_right - If the parent node already exists, add a new node to its right;
 * otherwise, move down one level and add the new node first.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	n_node = binary_tree_node(parent, value);
	if (n_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		n_node->right = parent->right;
		parent->right->parent = n_node;
	}
	parent->right = n_node;
	return (n_node);
}
