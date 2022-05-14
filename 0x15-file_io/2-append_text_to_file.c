#include "main.h"
/**
 * append_text_to_file - this is main
 * @filename: this is filename
 * @text_content: this is text
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int filewrite;
int i;

if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content == NULL)
{
close(fd);
return (1);
}
for (i = 0; text_content[i] != '\0'; i++)
;
filewrite = write(fd, text_content, i);
if (filewrite == -1)
return (-1);
close(fd);
return (1);
}
