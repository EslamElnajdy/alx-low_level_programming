#include "main.h"
/**
 *_strcat - Write a function that concatenates two strings.
 *
 *@dest: This is the output dest
 *@src: This is the input source
 *
 * Return: This return to dest, that concatenates two strings
 */

char *_strcat(char *dest, char *src)
{
	int i,j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while(src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
