#include "lists.h"

/**
 * print_lists - function prints all elements of list_t list
 *
 *@h: const list_t pointet to head of list
 *
 * Return: void
 */

size_t print_list(const list_t *h)
{
	va_list list;
	unsigned int i;
	char *x;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(list, char*);
		if (x == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", x);
			if (i < (n - 1) && separator)
			{
				printf("%s", separator);
			}
		}
	}
		va_end(list);
		printf("\n");
}
