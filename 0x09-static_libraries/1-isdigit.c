#include "holberton.h"
/**
 * _isdigit - int _isdigit(int c) function returns 1 if c is a 0-9 digit
 *
 * @c: int c
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
