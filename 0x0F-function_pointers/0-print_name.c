#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - to print name
 * @name: name
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
