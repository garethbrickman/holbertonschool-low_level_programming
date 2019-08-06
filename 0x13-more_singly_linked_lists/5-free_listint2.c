#include "lists.h"

/**
 * free_listint2 - function frees a listint_t list and sets head to NULL
 *
 *@head: pointer to pointer of head of linked list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node = *head;
	listint_t *temp;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;
			while (node != NULL)
			{
				temp = node;
				node = node->next;
				free(temp);
				head = NULL;
			}
}
