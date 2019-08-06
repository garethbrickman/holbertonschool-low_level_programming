#include "lists.h"

/**
 * sum_listint - function returns sum of all data of a listint_t list
 *
 *@head: pointer to pointer of head of linked list
 *
 * Return: sum of all data, or 0 if empty
 */

int sum_listint(listint_t *head)
{
	int i, x;

	while (head)
	{
		for (i = 0; head != NULL; i++)
		{
			x += head->n;
			head = head->next;
		}
		return (x);
	}
	return (0);
}
