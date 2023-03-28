#include "main.h"
/**
 * swap_int - swap the values of two integers
 * @a: the pointer to the variable
 * @b: the pointer to the variable
 */
void swap_int(int *a, int *b)
{
	int v = *a;
	*a = *b;
	*b = v;
}
