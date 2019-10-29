#include "sort.h"
/**
 * shell_sort - function sorts array of ints using Shell with Knuth sequence
 *
 * @array: ptr to array
 * @size: size of array
 *
 * Return: void
 */

void shell_sort(int *array, size_t size)
{
	unsigned int inner, outer;
	unsigned int interval = 1;
	int val;
	int i = 0;

	if (size >= 2)
	{
		while (interval <= (size / 3))
			interval = (interval * 3 + 1);
		while (interval > 0)
		{
			for (outer = interval; outer < size; outer++)
			{
				val = array[outer];
				inner = outer;
				while (inner > interval - 1 && array[inner - interval] >= val)
				{
					array[inner] = array[inner - interval];
					inner -= interval;
				}
				array[inner] = val;
			}
			interval = (interval - 1) / 3;
			print_array(array, size);
			i++;
		}
	}
}
