#include "binary_trees.h"
int height(const binary_tree_t *tree);
/**
 * binary_tree_balance - measure balance of a tree
 * @tree: pointer
 * Return: balance count difference
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 0;
	int r_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		l_height = height(tree->left);
	if (tree->right)
		r_height = height(tree->right);

	return (l_height - r_height);
}

/**
 * height - Measures height of binary tree
 * @tree: pointer to root
 *
 * Return: int height
 */

int height(const binary_tree_t *tree)
{
	int r_count, l_count;

	if (tree == NULL)
		return (0);

	r_count = height(tree->right);
	l_count = height(tree->left);

	if (l_count > r_count)
		return (l_count + 1);
	else
		return (r_count + 1);
}
