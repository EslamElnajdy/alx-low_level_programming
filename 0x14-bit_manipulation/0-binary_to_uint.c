#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: pointer to string.
 * Return: the int.
*/
unsigned int binary_to_uint(const char *b)
{
    if (b == NULL)
    {
        return (0);
    }
    
    return (strtol(b, NULL, 2));
}
