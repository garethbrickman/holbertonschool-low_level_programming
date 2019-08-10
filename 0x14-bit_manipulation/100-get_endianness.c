#include "holberton.h"

/**
 * get_endianness - function checks the endianness
 *
 *
 *
 *
 * Return: 0 if big, 1 if little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
