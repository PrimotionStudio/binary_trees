#include "binary_trees.h"

/**
 * binary_tree_delete - func to delete a whole tree
 * @tree: this is supposed to be the top of the tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
