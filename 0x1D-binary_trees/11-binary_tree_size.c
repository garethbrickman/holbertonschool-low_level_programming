#include "binary_trees.h"

/**
 * binary_tree_size - Measures size of binary tree
 * @tree: pointer to root
 *
 * Return: size_t size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!tree->right && tree->left == NULL)
		return (1);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
