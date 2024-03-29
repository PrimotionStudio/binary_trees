#include "binary_trees.h"


/**
 * binary_tree_depth - The calculate the depth of a tree
 * @tree: the tree to be calc-ed
 * Return: the depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;
	size_t i = 0;

	while (tree != NULL && temp->parent != NULL)
	{
		i++;
		temp = temp->parent;
	}
	return (i);
}
