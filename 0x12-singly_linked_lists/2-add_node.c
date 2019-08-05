#include "lists.h"

/**
 * *add_node - function adds new node to beginning of list
 *
 *@head: pointer to pointer of head of linked list
 *@str: const char pointer to string
 *
 * Return: address of new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *nstr = strdup(str);
	list_t *newhead = NULL;
	int x;

	if (!nstr)
		return (NULL);
	for (x = 0; nstr[x] != '\0'; x++)
	{
		;
	}
	newhead = malloc(sizeof(list_t));
	if (newhead == NULL)
	{
		free(nstr);
		return (NULL);
	}
	newhead->str = nstr;
	newhead->len = x;
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
