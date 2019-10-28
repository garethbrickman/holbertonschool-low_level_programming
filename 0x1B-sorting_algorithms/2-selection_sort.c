#include "sort.h"
/**
 * selection_sort - function sorts array of ints using selection method
 *
 * @array: ptr to array
 * @size: size of array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	unsigned int outer, inner, min_index;
	int temp;

	if (size >= 2)
	{
		for (outer = 0; outer < size - 1; outer++)
		{
			min_index = outer;
			for (inner = outer + 1; inner < size; inner++)
			{
				if (array[inner] < array[min_index])
					min_index = inner;
			}
			temp = array[min_index];
			array[min_index] = array[outer];
			array[outer] = temp;
			print_array(array, size);
		}
	}
}
