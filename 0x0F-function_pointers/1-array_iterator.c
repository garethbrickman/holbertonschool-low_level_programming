#include "function_pointers.h"
#include<stddef.h>

/**
 * array_iterator - function executes a function given as a parameter on
 * each element of an array.
 *
 *@array: pointer to array
 *@size: size_t of array
 *@action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action)
	{
		if (array)
		{
			for (i = 0; i < size; i++)
				action(*(array + i));
		}
	}
}
