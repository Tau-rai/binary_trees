#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node
 * Return: the count of nodes with a child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l_nodes, r_nodes;

	if (tree == NULL)
		return (0);

	l_nodes = binary_tree_nodes(tree->left);
	r_nodes = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + l_nodes + r_nodes);
	}
	else
		return (0);
}
