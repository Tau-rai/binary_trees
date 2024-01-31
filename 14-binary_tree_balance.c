#include "binary_trees.h"

int max(int a, int b);
int tree_height(const binary_tree_t *tree);
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

	l_height  = tree_height(tree->left);
	r_height = tree_height(tree->right);

	return (l_height - r_height);
}
/**
 * max - checks for max between two integers
 * @a: an integer
 * @b: an integer
 * Return: an integer
 */
int max(int a, int b)
{
	return ((a > b) ? a : b);
}
/**
 * tree_height - measures the height of a binary tree
 * @tree: pointer to root node
 * Return: height of the binary tree
 */
int tree_height(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL)
		return (0);

	l_height = tree_height(tree->left);
	r_height = tree_height(tree->right);

	return (1 + max(l_height, r_height));
}
