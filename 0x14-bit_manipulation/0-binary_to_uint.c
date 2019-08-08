#include "holberton.h"

/**
 * binary_to_uint - function converts binary number to unsigned int
 *
 *@b: pointer string of binary input
 *
 * Return: unsigned int conversion, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int x;

	while (b)
	{
		for (x = 0; b[x] != '\0'; x++)
		{
			if (b[x] == '1')
				dec = dec * 2 + 1;
			else if (b[x] == '0')
				dec *= 2;
			else
				return (0);
		}
		return (dec);
	}
	return (0);
}
