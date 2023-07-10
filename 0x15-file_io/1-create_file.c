#include "main.h"
/**
 * create_file - creates a file.
 * @filename: name of the file to create.
 * @text_content: is a NULL terminated
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;

	if (filename == NULL)
		return (-1);
	while (text_content[i] != '\0')
	{
		i++;
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (write(fd, text_content, i) < 0)
		return (-1);
	close(fd);
	return (1);
}
