#include <stdio.h>

/**
 * print_binary - print an unsigned int in binary
 *
 * @n:
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
    while (n > 0)
    {
        putchar((n & 1) ? '1' : '0');
        n >>= 1;
    }
    if (n == 0)
        putchar('0');
    if (n > 1) {
        print_binary(n);
    }
}
