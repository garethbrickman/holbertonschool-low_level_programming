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
	size_t bytes, wrytes;

	/*check if arguments are present*/
	if (filename == NULL || letters < 1)
		return (0);
	/*assign int to open function, check it does not return error*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/*malloc memory for the buffer ptr, check it does not == NULL*/
	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	/*assign size_t to read function, check it does not return error*/
	bytes = read(fd, buf, letters);
	if (bytes < 1)
		return (0);
	/*assign another size_t to write function, use bytes to set count*/
	wrytes = write(STDOUT_FILENO, buf, bytes);
	if (wrytes < 1)
		return (0);
	/*remember to close file, free memory!!*/
	free(buf);
	close(fd);
	/*return wrytes for actual number of output*/
	return (wrytes);
}
