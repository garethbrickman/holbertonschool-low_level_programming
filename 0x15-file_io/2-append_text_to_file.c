#include "holberton.h"

/**
 * append_text_to_file - function appends text to end of file
 *
 *@filename: char * to name of file being read
 *@text_content: char * to NULL terminated string to write
 *
 * Return:1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, wryte;

	/*check if arguments are present*/
	if (filename == NULL)
		return (-1);

	/*assign int to open function, check for errors*/
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	/*do this check after file is open so return can be 1, close file!*/
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
