#include <stdio.h>

/**
 * print_name - to print name
 * @name: name
 * @f: pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
