#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - fuction return a pointer
 * @b: input
 * Return: the pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = mallac(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
