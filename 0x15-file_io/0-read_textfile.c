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
	char *buf;
	size_t bytes;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	bytes = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, letters);
	close(fd);
	return (bytes);
}
