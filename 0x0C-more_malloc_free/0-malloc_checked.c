#include <stdlib.h>
/**
 * malloc_checked - fuction return a pointer
 * @b: input
 * Return: the pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = mallac(b);
	if (ptr == Null)
	{
		exit(98);
	}
	return (ptr);
}
