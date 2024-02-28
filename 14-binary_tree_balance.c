#include "binary_trees.h"

/**
 * traverse - a function to traverse the tree
 * @root: the root of the func
 * @i: a counter
 */
void traverse(const binary_tree_t *root, int *i)
{
	int j = 0, k = 0;

	if (root == NULL)
		return;
	traverse(root->left, &j);
	traverse(root->right, &k);
	if (j > k)
		*i = j + 1;
	else
		*i = k + 1;
}

/**
 * binary_tree_balance - The calculate the balance of a tree
 * @tree: the tree to be calc-ed
 * Return: the height of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	traverse(tree->left, &left);
	traverse(tree->right, &right);
	return (left - right);
}
