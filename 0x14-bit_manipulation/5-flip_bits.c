#include <stdlib.h>
#include "main.h"

/**
  * flip_bits - function return number
  * @n: number1
  * @m: number2
  *
  * Return: the number of bits.
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
