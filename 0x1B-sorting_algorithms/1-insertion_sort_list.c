#include "sort.h"
/**
 * insertion_sort_list - function sorts a doubly linked list of integers
 *
 * @list: listint_t list
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr = *list;
	listint_t *ptr, *temp;
	int incr = 0;

	if (curr->next == NULL)
		return;
	while (curr != NULL)
	{
		ptr = curr;
		temp = curr->prev;
		curr = curr->next;
		while (temp != NULL && temp->n > ptr->n)
		{
			incr++;
			temp = temp->prev;
		}
		if (incr)
		{
			ptr->prev->next = ptr->next;
			if (ptr->next != NULL)
				ptr->next->prev = ptr->prev;
			if (temp == NULL)
			{
				temp = *list;
				ptr->prev = NULL;
				ptr->next = temp;
				ptr->next->prev = ptr;
				*list = ptr;
			}
			else
			{
				temp = temp->next;
				temp->prev->next = ptr;
				ptr->prev = temp->prev;
				temp->prev = ptr;
				ptr->next = temp;
			}
			print_list(*list);
		}
	}
}
