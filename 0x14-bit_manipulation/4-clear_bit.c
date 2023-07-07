#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - clear the value of a bit
 * @n: number
 * @index: number
 *
 * Return: 1 if it is ok and 0 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~1 << index);
		return (1);
	}
	return (-1);
}
