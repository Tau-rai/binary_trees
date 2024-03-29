#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height;
	size_t r_height;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (tree->left != NULL || tree->right != NULL)
	{
		if (l_height > r_height)
			return (l_height + 1);
		else
			return (r_height + 1);
	}
	else
		return (0);

}
