#include "dog.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * *init_dog - function initializes variable of struct dog
 *
 *@d: struct values passed in to function
 *@name: char *
 *@age: float
 *@owner: char *
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
