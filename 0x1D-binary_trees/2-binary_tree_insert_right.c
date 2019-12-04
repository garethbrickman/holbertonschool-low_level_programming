#include "binary_trees.h"
/**
 *  binary_tree_insert_right - Function inserts a node as right-child
 *
 * @parent: ptr to parent node
 * @value: value for node
 *
 * Return: ptr to new node, or NULL on failure or NULL parent
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	while (parent)
	{
		binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

		if (newnode == NULL)
			return (NULL);

		newnode->n = value;

		if (parent->right)
		{
			newnode->right = parent->right;
			parent->right->parent = newnode;
			newnode->parent = parent;
			parent->right = newnode;
			newnode->left = NULL;
			return (newnode);
		}
		else
		{
			parent->right = newnode;
			newnode->parent = parent;
			newnode->right = NULL;
			newnode->left = NULL;
			return (newnode);
		}
	}
	return (NULL);
}
