#include "holberton.h"

/**
 * swap_int - function swaps int variable values around
 *
 *@a: int pointer
 *@b: int pointer
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;

}
