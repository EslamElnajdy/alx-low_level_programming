#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings. it will use at
 *            most n bytes from src
 *
 * @dest: This is the output  dest
 * @src: This is the input src
 * @n: This is the number bytes fro src
 *
 * Return: This is my return
 */
char *_strncat(char *dest, char *src, int n)
{
	int in, co;

	for (in = 0; dest[in] != '\0'; in++)
		;
	for (co = 0; co < n && src[co] != '\0'; co++)
	{
		dest[in] = src[co];
		in++;
	}
	if (co < n)
	{
		dest[in] = '\0';
	}
	return (dest);
}
