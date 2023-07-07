#include <stdlib.h>
#include "main.h"

/**
  * flip_bits - function 
  * @n: number
  * @m: number
  *
  * Return: eturns the number of bits you 
  * would need to flip to get from one number to another.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = 0, count = 0;

	res = n ^ m;
	while (res)
	{
		if (res & 1)
			count++;

		res >>= 1;
	}

	return (count);
}
