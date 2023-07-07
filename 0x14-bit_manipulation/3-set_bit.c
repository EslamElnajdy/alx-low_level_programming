#include "main.h"
#include <stdlib.h>
/**
 * set_bit - set the value
 * @n: number
 * @index: number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	return ((*n |= (1 << index)) ? 1 : -1);
}
