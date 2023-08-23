#include <stdio.h>
/**
 * add - add two numbers.
 * @a: number.
 * @b: number.
 * Return: the result.
*/
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - sub two numbers.
 * @a: number.
 * @b: number.
 * Return: the result.
*/
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - mul two numbers.
 * @a: number.
 * @b: number.
 * Return: the result.
*/
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - div two numbers.
 * @a: number.
 * @b: number.
 * Return: the result.
*/
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}
/**
 * mod - mod two numbers.
 * @a: number.
 * @b: number.
 * Return: the result.
*/
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a % b);
}
