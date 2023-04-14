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
	
	i = 0;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
