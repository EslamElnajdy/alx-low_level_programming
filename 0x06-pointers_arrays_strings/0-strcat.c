#include "main.h"

/**
 * *_strcat - This function appends the src string to the dest string
 * @dest: the first string
 * @src: the second string
 * Return: a pointer to the resulting string dest
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
	return dest;
}
