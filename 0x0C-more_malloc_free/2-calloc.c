#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function
 * @nmemb: input
 * @size: input
 * Return: address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = calloc(nmemb, size);
	if (p == NULL)
		return (NULL);
	return (p);
}
