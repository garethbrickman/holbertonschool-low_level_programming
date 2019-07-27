#include "variadic_functions.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<string.h>
/**
 * print_all - function prints anything
 *
 *@format: const char const ptr to input
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *x;

	va_start(list, format);

	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			x = va_arg(list, char*);
			if (format[i] == '\0')
			{
				printf("(nil)");
				break;
			}
			printf("%s", x);
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1] != '\0' && format)
			printf(", ");
		i++;
	}
	va_end(list);
	printf("\n");
}
