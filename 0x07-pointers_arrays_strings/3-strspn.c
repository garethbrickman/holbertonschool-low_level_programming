#include "holberton.h"

/**
 * _strspn - function gets length of prefix substring
 *
 *@s: char * pointer
 *@accept: char * pointer
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int returnbyte = 0;
	int loop1 = 0;
	int loop2 = 0;

	while (*(s + loop1))
		{
			while (*(accept + loop2))
				{
					if (*(accept + loop1) == *(s + loop2))
					{
						returnbyte++;
					}
					loop2++;
				}
			loop1++;
			loop2 = 0;
		}
			return (returnbyte + 1);
}
