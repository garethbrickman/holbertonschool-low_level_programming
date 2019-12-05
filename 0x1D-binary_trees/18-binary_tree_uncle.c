#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds uncle of a given node
 * @node: ptr to node in binary tree
 *
 * Return: ptr to uncle node, or NULL if no uncle or no parent
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	while (node)
	{
		if (!node->parent)
			return (NULL);

		if (node == node->parent->left)
			return (node->parent->parent->left);

		if (node == node->parent->right)
			return (node->parent->parent->right);
	}
	return (NULL);
}
