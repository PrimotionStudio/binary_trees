#include "binary_trees.h"

/**
 * traverse - a function to traverse the tree
 * @root: the root of the func
 * @i: a counter
 */
void traverse(const binary_tree_t *root, size_t *i)
{
	if (root == NULL)
		return;
	traverse(root->left, i);
	traverse(root->right, i);
	*i = *i + 1;
}

/**
 * binary_tree_size - The calculate the size of a tree
 * @tree: the tree to be calc-ed
 * Return: the height of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i = 0;

	traverse(tree, &i);
	return (i);
}
