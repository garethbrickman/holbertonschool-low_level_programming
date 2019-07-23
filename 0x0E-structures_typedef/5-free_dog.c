#include "dog.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * free_dog - function frees memory from dogs
 *
 *@d: dog_t type data
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
