#include "holberton.h"

/**
 * _puts - function prints a string
 *
 *@str: char pointer
 *
 * Return: 0
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
