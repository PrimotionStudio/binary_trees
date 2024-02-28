#include "binary_trees.h"

/**
 * traverse - a function to traverse the tree
 * @root: the root of the func
 * @i: a counter
 */
void traverse(const binary_tree_t *root, int *i)
{
	if (root == NULL)
		return;
	if ((root->left != NULL && root->right == NULL) ||
			(root->left == NULL && root->right != NULL))
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
