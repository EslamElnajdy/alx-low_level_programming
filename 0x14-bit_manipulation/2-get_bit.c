#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: index
Returns: the value of the bit at index index or -1 if an error occured
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
