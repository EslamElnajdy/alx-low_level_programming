#include "main.h"
/**
 * append_text_to_file - append
 * @filename: file
 * @text_content: text
 * Return: 1 ok, -1 otherwise
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (!filename)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i] != '\0')
	{
		i++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	if (!file)
		return (-1);

	file = write(file, text_content, i);
	if (!file)
		return (-1);

	close(file);
	return (1);
}
