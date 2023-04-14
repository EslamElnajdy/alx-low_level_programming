#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat -  returned pointer shall point to a newly
 * allocated space in memory
 * @s1: string1
 * @s2: string2
 * @n: number of bytes of s2
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j;


	if (s1 == NULL)
		i = 0;
	if (s1)
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		n = 0;
	p = malloc(sizeof(char) * (i + n + 1));
	if (p == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		p[j] = s1[j];
	for (j = 0; j < n; j++)
		p[j + i] = s2[j];
	p[i + j] = '\0';
	return (p);
}
