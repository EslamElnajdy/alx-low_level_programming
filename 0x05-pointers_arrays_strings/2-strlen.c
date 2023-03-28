#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: the pointer to a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
