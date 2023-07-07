#include "main.h"

/**
 * get_bit - return the value
 * @n: number
 * @index: number
 *
 * Return: value of index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int com = 0;

	while (n)
	{
		if (com == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		com++;
	}

	if (index > comp && index < 63)
		return (0);

	return (-1);
}
