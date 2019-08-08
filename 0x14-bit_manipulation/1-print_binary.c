#include "holberton.h"

/**
 * binary_to_uint - function prints binary conversion of a number
 *
 *@n: unsigned long int number input
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n>>1);
	n = n & 1;
	_putchar(n + '0');
}

/* 	int b, c; */

/* 	for (b = 31; b >= 0; b--) */
/* 	{ */
/* 		c = n >> b; */
/* 		if (c & 1) */
/* 			_putchar('1'); */
/* 		else */
/* 			_putchar('0'); */
/* 	} */
/* 	_putchar('\n'); */
/* } */
