#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts leaves in a binary tree
 * @tree: node pointer of root
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!tree->right && tree->left == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
