#include "binary_trees.h"

/**
 * binary_tree_uncle - a func to get the uncle of a node
 * @node: the node
 * Return: the height of the tree
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
