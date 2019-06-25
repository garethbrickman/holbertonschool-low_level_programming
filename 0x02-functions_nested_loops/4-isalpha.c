#include "holberton.h"
/**
 * _isalpha -  filters Holberton input
 *
 * @c: char / ASCII character
 *
 * Return: 1 when true, 0 for all else
 */
int _isalpha(int c)
{

	if (c > 64 && c < 123)
		return (1);

	else
		return (0);
}
