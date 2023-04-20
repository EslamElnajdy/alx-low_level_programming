#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - return the sum
 * @a: num
 * @b: num
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the sub
 * @a: num
 * @b: num
 * Return: sub
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the mul
 * @a: num
 * @b: num
 * Return: mul
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the div
 * @a: num
 * @b: num
 * Return: div
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return the mod
 * @a: num
 * @b: num
 * Return: mod
 */

int op_mod(int a, int b)
{
	return (a % b);
}
