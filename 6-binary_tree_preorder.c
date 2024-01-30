#include "binary_trees.h"

/**
 * binary_tree_preorder - preorder traversal of the binary tree
 * @tree: pointer to the root node
 * @func: pointer to a function to call each node
 * Retunr: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, (func));
	binary_tree_preorder(tree->right, (func));
}
