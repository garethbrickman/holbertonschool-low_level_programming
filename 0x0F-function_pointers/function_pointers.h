#ifndef FUNC_H
#define FUNC_H
#include<stddef.h>
/*Structs*/
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
/*Typedefs*/
typedef struct dog dog_t;
/*Prototypes*/
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int _putchar(char c);
#endif
