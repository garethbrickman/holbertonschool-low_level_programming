#include "binary_trees.h"

/**
 * binary_tree_height - Measures height of binary tree
 * @tree: pointer to root
 *
 * Return: size_t height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r_count = 0;
	size_t l_count = 0;

	if (tree == NULL)
		return (0);

	if (!tree->right && !tree->left)
		return (0);

	while (tree->right)
	{
		r_count++;
		tree = tree->right;
	}
	while (tree->left)
	{
		l_count++;
		tree = tree->left;
	}

	if (l_count <= r_count)
		return (r_count);
	else
		return (l_count);
}
