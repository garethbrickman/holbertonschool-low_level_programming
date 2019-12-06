#include "binary_trees.h"
#include<limits.h>
int bst_util(const binary_tree_t *tree, int min, int max);
/**
 * binary_tree_is_bst - Checks if a tree is a BST
 * @tree: ptr to root node
 *
 * Return: 1 if is a BST, 0 if not
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (bst_util(tree, INT_MIN, INT_MAX));
}

/**
 * bst_util - Checks if a tree is a BST
 * @tree: ptr to root node
 * @min: minimum constraint
 * @max: maximum constraint
 *
 * Return: 1 if is a BST, 0 if not
 */

int bst_util(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);
	return (bst_util(tree->left, min, tree->n - 1) &&
		bst_util(tree->right, tree->n + 1, max));
}
