#include "function_pointers.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * int_index - function searches for integer
 *
 *@array: pointer to array of ints
 *@size: size of array
 *@cmp: pointer to comparison function
 *
 * Return: int or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (cmp)
	{
		
}
