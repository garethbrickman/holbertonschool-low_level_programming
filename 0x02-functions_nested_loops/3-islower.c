#include "holberton.h"
/**
 * _islower -  filters Holberton input
 *
 * @c: char / ASCII character
 *
 * Return: 1 when true, 0 for all else
 */
int _islower(int c)
{

	if (c > 91)
		return (1);

	else
		return (0);
}
