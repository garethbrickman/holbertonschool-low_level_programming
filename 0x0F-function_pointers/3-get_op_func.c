#include"3-calc.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * get_op_func - function finds function for operator sign
 *
 *@s: char * string
 *
 * Return: int
 */

int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (!strcmp(s, ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
