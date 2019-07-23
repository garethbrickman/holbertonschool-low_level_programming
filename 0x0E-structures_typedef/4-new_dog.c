#include "dog.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * *new_dog - function creates a new dog of type dog_t
 *
 *@name: char *
 *@age: float
 *@owner: char *
 *
 * Return: *new_dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pdog;
	char *pname, *powner;
	int lenname, lenowner, i, x;

	for (lenname = 0; name[lenname] != '\0'; lenname++)
		;
	lenname++;
	for (lenowner = 0; owner[lenowner] != '\0'; lenowner++)
		;
	lenowner++;
	pname = malloc(sizeof(char) * lenname);
	if (pname == NULL)
		return (NULL);
	powner = malloc(sizeof(char) * lenowner);
	if (powner == NULL)
	{
		free(pname);
		return (NULL);
	}
	pdog = malloc(sizeof(dog_t));
	if (pdog == NULL)
	{
		free(pname);
		free(powner);
		return (NULL);
	}
	for (i = 0; i < lenname; i++)
	{
		pname[i] = name[i];
	}
	for (x = 0; x < lenowner; x++)
	{
		powner[x] = owner[x];
	}
	pdog->name = pname;
	pdog->age = age;
	pdog->owner = powner;
	return (pdog);
}
