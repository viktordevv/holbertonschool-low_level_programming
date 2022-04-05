#include "main.h"
/**
 * read_textfile - this is main
 * @filename:
 * @letters:
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readed;
	char *buffptr = malloc(sizeof(char *) * letters);

	if (buffptr == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	readed = read(fd, buffptr, letters);
	write(STDOUT_FILENO, buffptr, readed);

	free(buffptr);
	close(fd);
	return (readed);
}