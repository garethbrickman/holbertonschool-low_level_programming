#include "search_algos.h"

/**
 *  recursive_bsearch - helper function using recursion
 *
 * @array: ptr to array
 * @size: number of elements in array
 * @value: value at index
 * @index: index of mid prior to recursive call
 *
 * Return: first index where value is, otherwise -1 if no value or array NULL
 */

int recursive_bsearch(int *array, size_t size, int value, unsigned int index)
{
	unsigned int lo = 0;
	unsigned int hi = size - 1;
	unsigned int mid;

	if (size == 0)
		return (-1);

	printf("Searching in array: ");
	print_array(array, size);

	if (lo > hi)
		return (-1);
	if (size % 2 == 0)
		mid = (size / 2) - 1;
	else
		mid = size / 2;
	if (array[mid] == value)
		return (mid + index);
	else if (array[mid] > value)
		return (recursive_bsearch(array, mid, value, index));
	else if (array[mid] < value)
		return (recursive_bsearch(array + mid + 1, size - mid - 1,
					  value, index + mid + 1));
	return (-2);
}

/**
 *  advanced_binary - searches for value in array ints with Binary search algo
 *
 * @array: ptr to array
 * @size: number of elements in array
 * @value: value at index
 *
 * Return: first index where value is, otherwise -1 if no value or array NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	unsigned int index = 0;

	if (!array)
		return (-1);

	return (recursive_bsearch(array, size, value, index));
}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
