#include "binary_trees.h"

/**
 * binary_tree_height - Measures height of binary tree
 * @tree: pointer to root
 *
 * Return: size_t height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r_count, l_count;

	if (tree == NULL)
		return (0);

	if (!tree->right && !tree->left)
		return (0);

	r_count = binary_tree_height(tree->right);
	l_count = binary_tree_height(tree->left);

	if (l_count > r_count)
		return (l_count + 1);
	else
		return (r_count + 1);
}
