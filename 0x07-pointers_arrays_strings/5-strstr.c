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
	int lengthN = _strlen(needle);

	for (; *haystack != '\0'; haystack++)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (*(haystack + i) == needle[i])
			{
				if (i == (lengthN - 1))
				{
					return (haystack);
				}
				else
				{
					break;
				}
			}
		}
	}
	return (0);
}

/**
 * _strlen - function returns length of a string
 *
 *@s: char pointer
 *
 * Return: length
 *
 */

int _strlen(char *s)
{
	char *copy_s = s;
	int length = 0;

	while (*copy_s != '\0')
	{
		length++;
		copy_s++;
	}
	return (length);
}
