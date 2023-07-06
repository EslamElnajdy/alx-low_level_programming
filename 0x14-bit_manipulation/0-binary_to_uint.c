#include "main.h"
#include <stddef.h>
 /**
  * binary_to_uint - converts a binary number to an unsigned int.
  * @b: is pointing to a string of 0 and 1 chars.
  * Return: the converted number.
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0;
	unsigned int base = 1;

	if (b == NULL)
	{
		return (0);
	}
	while (b[len] != '\0')
	{
		len++;
	}
	len--;
	while (len >= 0)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
		if (b[len] == '1')
		{
			num += base;
		}
		base *= 2;
		len--;
	}
	return (num);
}
