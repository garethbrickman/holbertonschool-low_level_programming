#include "variadic_functions.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
/**
 * print_strings - function prints strings
 *
 *@n: const unsigned int number of arguments
 *@separator: char * string printed between numbers
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
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
