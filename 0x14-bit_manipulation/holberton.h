#ifndef HOLBERTON_H
#define HOLBERTON_H
#include<stddef.h>
#include<stdarg.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Structs*/
/*Prototypes*/
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
unsigned long int countbits(unsigned long int n);
#endif
