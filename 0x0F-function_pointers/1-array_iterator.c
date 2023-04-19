#include "function_pointers.h"

/**
 * array_iterator -  function that executes a function
 * given as a parameter on each element of an array.
 * @array: array
 * @size: size
 * @action: fun
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
