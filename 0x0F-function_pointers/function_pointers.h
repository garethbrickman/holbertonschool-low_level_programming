#ifndef FUNC_H
#define FUNC_H
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
int _putchar(char c);
#endif
