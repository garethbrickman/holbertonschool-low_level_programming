#include "binary_trees.h"

/**
 * binary_tree_balance - measure balance of a tree
 * @tree: pointer
 * Return: balance count difference
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	const binary_tree_t *tmp2;
	const binary_tree_t *tmp1;

	tmp1 = tree;
	tmp2 = tree;
	int cnt2, cnt1 = 0;

	if (tree == NULL)
		return (0);

	for (; tmp2->left != NULL; cnt2++)
	{
		tmp2 = tmp2->left;
	}

	for (; tmp1->right != NULL; cnt1++)
	{
		tmp1 = tmp1->right;
	}

	return (cnt2 - cnt1);

}
