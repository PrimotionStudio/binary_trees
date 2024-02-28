#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses the tree in preorder
 * @tree: the tree to traverse
 * @func: a function argument to be executed
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
