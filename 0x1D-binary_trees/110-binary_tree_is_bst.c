#include "binary_trees.h"
int bst_util(const binary_tree_t *tree, const binary_tree_t *prev);
/**
 * binary_tree_is_bst - Checks if a tree is a BST
 * @tree: ptr to root node
 *
 * Return: 1 if is a BST, 0 if not
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	const binary_tree_t *prev = NULL;

	if (!tree)
		return (0);

	return (bst_util(tree, prev));
}

/**
 * bst_util - Checks if a tree is a BST
 * @tree: ptr to root node
 * @prev: ptr to previous node
 *
 * Return: 1 if is a BST, 0 if not
 */

int bst_util(const binary_tree_t *tree, const binary_tree_t *prev)
{
	if (tree)
	{
		if (!bst_util(tree->left, prev))
			return (0);
		if (prev != NULL && tree->n <= prev->n)
			return (0);

		prev = tree;

		return (bst_util(tree->right, prev));
	}
	return (1);
}
