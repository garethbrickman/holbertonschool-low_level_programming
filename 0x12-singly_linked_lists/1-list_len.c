#include "lists.h"

/**
 * list_len - function returns number of elements in linked list
 *
 *@h: const list_t pointer to head of list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int x;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}
	return (x);
}
