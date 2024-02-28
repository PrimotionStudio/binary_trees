#include "binary_trees.h"

/**
 * binary_tree_sibling - a func to get the siblibg of a node
 * @node: the node
 * Return: the height of the tree
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
