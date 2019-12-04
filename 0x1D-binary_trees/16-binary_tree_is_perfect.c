#include "binary_trees.h"
int binary_int_depth(const binary_tree_t *tree);
int is_perfect(const binary_tree_t *tree, int depth, int level);

/**
 * binary_tree_is_perfect - Checks if binary tree is perfect
 * @tree: pointer to root
 *
 * Return: 1 if perfect, 0 if not or tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);
	depth = binary_int_depth(tree);
	return (is_perfect(tree, depth, 0));
}

/**
 * is_perfect - Recursive check for perfect binary tree
 * @tree: pointer to root
 * @depth: int max depth
 * @level: int level to check leaves
 *
 * Return: 1 or 0
 */

int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		if (depth == (level + 1))
			return (1);
		return (0);
	}
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, depth, level + 1)
		&& is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_int_depth - Measures max depth of binary tree
 * @tree: pointer to root
 *
 * Return: int depth
 */

int binary_int_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree != NULL)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}
