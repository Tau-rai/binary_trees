#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree);
int is_perfect(const binary_tree_t *tree, size_t depth, size_t level);
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of a tree
 * Return: 1 if tree is pefect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	depth = binary_tree_depth(tree);

	return (is_perfect(tree, depth, 1));
}
/**
 * binary_tree_depth - measures the depth of a node ina binary tree
 * @tree: pointer to the node
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}
/**
 * is_perfect - checks if a tree is perfect
 * @tree: pointer to the root node of the tree
 * @depth: depth of the tree
 * @level: node level
 * Return: 1 if tree is perfect
 */
int is_perfect(const binary_tree_t *tree, size_t depth, size_t level)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = is_perfect(tree->left, depth, level + 1);
	right = is_perfect(tree->right, depth, level + 1);

	return (left && right);
}
