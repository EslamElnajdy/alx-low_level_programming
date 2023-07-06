#include "main.h"
#include <stdio.h>
 /**
  * binary_to_uint - converts a binary number
  * to an unsigned int.
  * @b: is pointing to a string
  * of 0 and 1 chars.
  * Return: the converted number.
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int len;
	int base;

	num = 0;
	len = 0;
	base = 1;

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
