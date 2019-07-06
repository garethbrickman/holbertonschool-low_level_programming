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
	int y;

	if (len % 2 == 0)
	{
		y = len / 2;
	}
	else if (len % 2 != 0)
	{
		y = (len + 1) / 2;
	}
	for (; *(str + y) != '\0'; y++)
	{
		_putchar(*(str + y));
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
