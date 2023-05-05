#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
    int rem;
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
