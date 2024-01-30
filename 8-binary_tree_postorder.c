#include "binary_trees.h"

/**
 * binary_tree_postorder - postorder traversal of the binary tree
 * @tree: pointer to the root node
 * @func: pointer to a function to call each node
 * Retunr: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, (func));
	binary_tree_postorder(tree->right, (func));
	func(tree->n);
}
