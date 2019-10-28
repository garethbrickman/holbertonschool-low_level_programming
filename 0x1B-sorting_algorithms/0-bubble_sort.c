#include "sort.h"
/**
 * bubble_sort - function sorts array of ints using bubble method
 *
 * @array: ptr to array
 * @size: size of array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	unsigned long int outer, inner;
	int temp, swap;

	if (size >= 2)
	{
		for (outer = 0; outer < size; outer++)
		{
			swap = 0;

			for (inner = 0; inner < size - outer; inner++)
			{
				if (array[inner] > array[inner + 1] && inner != size - 1)
				{
					temp = array[inner];
					array[inner] = array[inner + 1];
					array[inner + 1] = temp;
					swap = 1;
					print_array(array, size);
				}
			}
			if (!swap)
				break;
		}
	}
}
