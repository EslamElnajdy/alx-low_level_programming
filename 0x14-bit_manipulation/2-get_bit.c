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
	unsigned int rem = 0;
	int arr[31];
	int i = 0;

	while (n)
	{
		rem = n % 2;
		n = n / 2;
		arr[i] = rem;
		i++;
	}
	return (arr[index]);
}
