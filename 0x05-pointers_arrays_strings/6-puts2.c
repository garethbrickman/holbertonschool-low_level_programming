#include "holberton.h"

/**
 * puts2 - function prints one char out of 2 of a string
 *
 *@str: char pointer
 *
 * Return: 0
 */

void puts2(char *str)
{
	int even = *str;

	while (*str != '\0')
		if (even % 2 == 0)
		{
			str++;
			even++;
			_putchar(*str);
		}
	_putchar('\n');
}
