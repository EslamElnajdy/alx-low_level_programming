#include "main.h"

/**
 * read_textfile - read from file and print
 * @filename: pointer to file
 * @letters: number of letters
 * Return: the number of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = -1;
	char *buffer;
	ssize_t output = 0;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);
	output = read(file, buffer, letters);
	if (output < 0)
	{
		free(buffer);
		close(file);
		return (0);
	}
	output = write(STDOUT_FILENO, buffer, output);
	free(buffer);
	close(file);
	if (output < 0)
		return (0);
	return (output);
}
