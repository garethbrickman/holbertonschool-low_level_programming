#include "holberton.h"

/**
 * puts_half - function prints half of a string
 *
 *@str: char pointer to string
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int count = 0;
	int mid = len / 2;

	while (count > mid)
	{
		_putchar(*str);
		str++;
		count++;
	}
	_putchar('\n');
}

/**
 * _strlen - function returns length of a string
 *
 *@s: char pointer
 *
 * Return: length
 *
 */

int _strlen(char *s)
{
	char *copy_s = s;
	int length = 0;

	while (*copy_s != '\0')
	{
		length++;
		copy_s++;
	}
	return (length);
}
