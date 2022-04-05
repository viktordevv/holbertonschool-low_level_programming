#include "main.h"
/**
 * read_textfile - this is main
 * @filename:
 * @letters:
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int writebuff, readbuff, fd;
    char *buffptr;

    if (filename == NULL)
        return (0);
    buffptr = malloc(sizeof(char) * letters);
    if (buffptr == NULL)
        return (0);
    fd = open(filename, O_RDWR);
    if (fd == -1)
        return (0);
    readbuff = read(fd, buffptr, letters);
    if (readbuff == -1)
        return (0);
    writebuff = write(STDOUT_FILENO, buffptr, readbuff);
    if (writebuff == -1)
        return (0);
    close(fd);
    free(buffptr);
    return (writebuff);
}
