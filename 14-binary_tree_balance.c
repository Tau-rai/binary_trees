#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
	{
		l_height = 0;
	}
	else
	{
		l_height  = binary_tree_balance(tree->left) + 1;
	}
	if (tree->right == NULL)
	{
		r_height = 0;
	}
	else
	{
		r_height = binary_tree_balance(tree->right) + 1;
	}

	return (l_height - r_height);
}