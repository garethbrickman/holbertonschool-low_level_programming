#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <ctype.h>
#include <string.h>
/* Structs */

/* Prototypes */
void print_array(int *array, size_t size);
int recursive_bsearch(int *array, size_t size, int value, unsigned int index);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
#endif
