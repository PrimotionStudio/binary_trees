#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function to create a new node
 * at the left of the parent
 * @parent: the parent node of this new node
 * @value: the value associated with this new node
 * Return: the newNode created
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		newNode->left->parent = newNode;
	}
	parent->left = newNode;
	newNode->parent = parent;
	return (newNode);
}
