#include "holberton.h"

/**
 * *_strstr - function locates a substring
 *
 *@haystack: char * pointer
 *@needle: char * pointer
 * Return: pointer to located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (; *haystack != '\0'; haystack++)
	{
		if (haystack[i] == needle[i])
		{
			for (i = 0; needle[i] != '\0'; i++)
			{
				return (haystack);
			}
		}
	}
	return (0);
}
