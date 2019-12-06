#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds lowest common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to lowest common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const
				     binary_tree_t *second)

{
	binary_tree_t *temp;

	if (!first || !second)
		return (0);

	temp = (binary_tree_t *)second;

	for (; first; second = temp)
	{
		for (; second; second = second->parent)
		{
			if (first == second)
				return ((binary_tree_t *)first);
		}
		first = first->parent;
	}
	return (NULL);
}
