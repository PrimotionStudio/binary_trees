#include "binary_trees.h"

/**
 * traverse - a function to traverse the tree
 * @root: the root of the func
 * @i: a counter
 */
void traverse(const binary_tree_t *root, size_t *i)
{
	size_t j = 0, k = 0;

	if (root == NULL)
		return;
	if (root->left != NULL || root->right != NULL)
	{
		traverse(root->left, &j);
		traverse(root->right, &k);
		if (j > k)
			*i = j + 1;
		else
			*i = k + 1;
	}
}

/**
 * binary_tree_height - The calculate the height of a tree
 * @tree: the tree to be calc-ed
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0;

	traverse(tree, &i);
	return (i);
}