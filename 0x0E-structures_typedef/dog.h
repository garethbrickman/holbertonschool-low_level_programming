#ifndef DOG_H
#define DOG_H
(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - contains data for dog
 * @name: char *
 * @age: float
 * @owner: char *
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
