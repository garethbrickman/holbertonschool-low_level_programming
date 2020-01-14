#include "search_algos.h"
/**
 *  linear_search - searches for value in array ints with Linear search algo
 *
 * @array: ptr to array
 * @size: number of elements in array
 * @value: value at index
 *
 * Return: first index where value is, otherwise -1 if no value or array NULL
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
