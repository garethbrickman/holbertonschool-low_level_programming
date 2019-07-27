#include "variadic_functions.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
/**
 * print_numbers - function prints numbers
 *
 *@n: const unsigned int number of arguments
 *@separator: char * string printed between numbers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int x;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(list, int);
		printf("%d", x);
		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
