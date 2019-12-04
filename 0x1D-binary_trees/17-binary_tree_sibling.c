#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds sibling of a given node
 * @node: ptr to node in binary tree
 *
 * Return: ptr to sibling node, or NULL if no sibling or no parent
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);


}
