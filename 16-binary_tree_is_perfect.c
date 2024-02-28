#include "binary_trees.h"

/**
 * traverse_h- a function to traverse the tree
 * @root: the root of the func
 * @i: a counter
 */
void traverse_h(const binary_tree_t *root, size_t *i)
{
	size_t j = 0, k = 0;

	if (root == NULL)
		return;
	if (root->left != NULL || root->right != NULL)
	{
		traverse_h(root->left, &j);
		traverse_h(root->right, &k);
		if (j > k)
			*i = j + 1;
		else
			*i = k + 1;
	}
}

/**
 * traverse - a function to traverse the tree
 * @root: the root of the func
 * @i: a counter
 */
void traverse(const binary_tree_t *root, int *i)
{
	size_t y = 0, z = 0;

	if (root == NULL)
		return;
	if ((root->left != NULL && root->right == NULL) ||
			(root->left == NULL && root->right != NULL))
	{
		*i = 0;
		return;
	}
	traverse_h(root->left, &y);
	traverse_h(root->right, &z);
	if (y != z)
	{
		*i = 0;
		return;
	}
	traverse(root->left, i);
	traverse(root->right, i);
}

/**
 * binary_tree_is_perfect - func checks if a btree is perfect
 * @tree: the tree to be calc-ed
 * Return: 1 if perfect or 0 is not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int i = 1;

	if (tree == NULL)
		return (0);
	traverse(tree, &i);
	return (i);
}
