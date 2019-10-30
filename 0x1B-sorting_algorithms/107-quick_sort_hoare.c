#include "sort.h"
/**
 * quick_sort_hoare - function sorts array of ints using quick sort method
 *
 * @array: ptr to array
 * @size: size of array
 *
 * Return: void
 */

void quick_sort_hoare(int *array, size_t size)
{
	int pivot = array[size - 1];
	unsigned int i, j;
	int temp;

	if (size >= 2)
	{
		for (i = 0, j = size - 1;; i++, j--)
		{
			while (array[i] < pivot)
				i++;
			while (pivot < array[j])
				j--;
			if (i >= j)
				break;

			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
		quick_sort_hoare(array, i);
		quick_sort_hoare(array + i, size - i);
		print_array(array, size);
	}
}
