#include "holberton.h"

/**
 * print_rev - function prints a string in reverse
 *
 *@s: char pointer
 *
 * Return: 0
 */

void print_rev(char *s)
{

	char *length = s;
	int end = length - 1;
	int start = 0;

	while (*length != '\0')
	{
		length++;
	}
	for (start != end && start > end; end--, start++)
	{
		length = *start
			*start = *end
			*end = length;
	}
	_putchar(
	_putchar('\n');
}
