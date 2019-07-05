#include "holberton.h"

/**
 * rev_string - function reverses a string
 *
 *@s: char pointer
 *
 * Return: *s
 */

void rev_string(char *s)
{
	int len = _strlen(s);
	int mid = len / 2;
	int count = 0;
	char tmp;

	while (count < mid)
	{
		tmp = s[count];
		s[count] = s[len - count - 1];
		s[len - count - 1] = tmp;
		count++;
	}
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
