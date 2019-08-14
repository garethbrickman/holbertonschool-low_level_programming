#include "holberton.h"

/**
 * main - function copies content of one file to another
 *
 *@argc: number of arguments
 *@argv: char * to input arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fd1, fd2;
	ssize_t lread, lwrite;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (fd2 < 0)
		fd2 = open(argv[2], O_TRUNC | O_WRONLY);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (lread)
	{
		lread = read(fd1, buff, 1024);
		if (lread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		lwrite = write(fd2, buff, lread);
		if (lwrite == -1 || lwrite != lread)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(fd1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	if (close(fd2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);
	return (0);
}
