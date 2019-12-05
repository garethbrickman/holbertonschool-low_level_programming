#include "binary_trees.h"
int height(const binary_tree_t *tree);
void printLevel(const binary_tree_t *tree, void (*func)(int), int level);

/**
 * binary_tree_levelorder - Utilize level-order traversal
 * @tree: tree
 * @func: function to call on the node
 *
 * Return: void
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h = height(tree);
	int i;

	for (i = 1; i <= h; i++)
		printLevel(tree, func, i);
}
/**
 * printLevel - Prints nodes at given level
 * @tree: pointer to root
 * @level: level of node
 * @func: function to call on node
 * Return: void
 */

void printLevel(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		printLevel(tree->left, func, level - 1);
		printLevel(tree->right, func, level - 1);
	}
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
