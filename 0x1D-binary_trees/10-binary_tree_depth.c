#include "binary_trees.h"

/**
 * binary_tree_depth - Measures depth of binary tree
 * @tree: pointer to root
 *
 * Return: size_t height
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
