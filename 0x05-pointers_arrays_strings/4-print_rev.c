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

	char *copy_s = s;
	int dummy = 0;

	while (*copy_s != '\0')
	{
		dummy++;
		copy_s++;
	}
	_putchar(dummy);
	_putchar('\n');
}
