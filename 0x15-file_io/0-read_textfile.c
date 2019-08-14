#include "holberton.h"

/**
 * read_textfile - function reads text file and prints it to POSIX stdout
 *
 *@filename: char * to name of file being read
 *@letters: size_t number of letters to be read and print
 *
 * Return:number of letters that could be read and print;
 * 0 if file cannot be read, opened or written or is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[468];

	fd = open(filename, O_RDWR);

	if (fd == -1 || filename == NULL)
		return (0);

	read(fd, buf, letters);
	write(fd, buf, letters);
	close (fd);
	return (letters);
}
