#include "lists.h"

/**
 * print_list - function prints all elements of list_t list
 *
 *@h: const list_t pointet to head of list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int x;

	for (x = 0; h != NULL; x++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (x);
}
