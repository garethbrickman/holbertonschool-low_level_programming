#include "holberton.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * *_realloc - function reallocates memory block
 *
 *@ptr: void pointer
 *@old_size: unsigned int
 *@new_size: unsigned int
 *
 * Return: pointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *copyp = ptr;
	char *newp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newp = malloc(new_size);
	if (newp == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
	{
		for (i = 0; i < old_size; i++)
			newp[i] = copyp[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			newp[i] = copyp[i];
	}
	free(ptr);
	return (newp);
}
