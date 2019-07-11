#include "holberton.h"

/**
 * is_palindrome - function returns 1 if string is palindrome
 *
 *@s: char * pointer
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{


}

/**
 * compare - function checks if chars are same
 *
 *@n: integer number
 *@x: integer number
 *
 * Return: 1 or 0
 */

int compare


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
