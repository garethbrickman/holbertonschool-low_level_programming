#include "sort.h"
/**
 * quick_sort - function sorts array of ints using quick sort method
 *
 * @array: ptr to array
 * @size: size of array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	unsigned int i, j, pivot, temp;
	unsigned int first = array[0];
	unsigned int last = array[size - 1];

	if (size >= 2)
	{
		if (first < last)
		{
			pivot = first;
			i = first;
			j = last;

			while (i < j)
			{
				while (array[i] <= array[pivot] && i < last)
					i++;
				while (array[j] > array[pivot])
					j--;
				if (i < j)
				{
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}

			temp = array[pivot];
			array[pivot] = array[j];
			array[j] = temp;
			quick_sort(array, (j - 1));
			quick_sort(array, last);
		}
	}
}
