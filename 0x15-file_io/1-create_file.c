#include "holberton.h"

/**
 * create_file - function creates a file
 *
 *@filename: char * to name of file being read
 *@text_content: char * to NULL terminated string to write
 *
 * Return:1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, wryte;


	/*check if arguments are present*/
	if (filename == NULL)
		return (-1);
	/*assign int to open function, check for errors*/
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
		return (-1);
	/*create file if string is empty*/
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	/*find length of string to use as count in write*/
	for (len = 0; text_content[len] != '\0'; len++)
		;
	/*use fd as input for write instead of STDIN, len for count*/
	wryte = write(fd, text_content, len);
	if (wryte < 1)
		return (-1);
	/*remember to close!*/
	close(fd);
	/*returning 1 for success, but may need additional error check*/
	return (1);
}
