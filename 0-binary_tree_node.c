#include "binary_trees.h"

/**
 * binary_tree_node - Function to create a new node
 * @parent: the parent node of this new node
 * @value: the value associated with this new node
 * Return: the newNode created
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	return (newNode);
}
