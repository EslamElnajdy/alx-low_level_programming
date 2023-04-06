#include "main.h"
/**
 * _sqrt_recursion - return the square root
 * @n: number
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	int sqrt(int a, int b)
	{
		if (a * a == b)
			return (a);
		if (a * a > b)
			return (-1);
		return (sqrt(a+1,b));
	}
	return (sqrt(1,n);
}
