#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;
	size_t i = 0;

	while (temp->parent != NULL)
	{
		i++;
		temp = temp->parent;
	}
	return (i);
}
