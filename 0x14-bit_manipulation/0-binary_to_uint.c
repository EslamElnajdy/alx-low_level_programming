#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: pointer to string.
 * Return: the int.
*/
unsigned int binary_to_uint(const char *b)
{
	int i = 0, base = 1;
	unsigned int res = 0;
	
	if (b == NULL)
	{
		return (0);
	}
	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	while (i >= 0)
	{
		res += ((b[i] - '0') * base);
		base *= 2;
		i--;
	}
	return (res);
}
