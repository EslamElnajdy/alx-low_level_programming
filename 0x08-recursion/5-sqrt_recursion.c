#include "main.h"
/**
 * _sqrt_recursion - return the square root
 * @n: number
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	int a = 0;

	while (a < n)
	{
		if (a * a == n)
			return a;
		a++;
	}
	return (-1);
}
