#include "main.h"
#include <stdlib.h>
/**
 * array_range - function
 * @min: input
 * @max: input
 * Return: address
 */
int *array_range(int min, int max)
{
	int i, *p;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
