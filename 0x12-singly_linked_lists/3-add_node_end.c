#include "lists.h"

/**
 * *add_node_end - function adds new node to end of list
 *
 *@head: pointer to pointer of head of linked list
 *@str: const char pointer to string
 *
 * Return: address of new element, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *nstr = strdup(str);
	list_t *last = *head;
	list_t *new_node = NULL;
	int x;

	if (!nstr)
		return (NULL);
	for (x = 0; nstr[x] != '\0'; x++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(nstr);
		return (NULL);
	}
	new_node->str = nstr;
	new_node->len = x;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
