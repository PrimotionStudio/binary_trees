#include "binary_trees.h"

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

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0;
	traverse(tree, &i);
	return (i);
}
