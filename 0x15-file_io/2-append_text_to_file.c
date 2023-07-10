#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int file;

	if (!filename)
		return (-1);
	if (!text_content)
	return (-1);
	file = open(filename, O_RDWR | O_APPEND);
	if (!file)
	return (-1);
	file = write(file, text_content, strlen(text_content));
	if (!file)
		return (-1);
	close(file);
	return (1);
}