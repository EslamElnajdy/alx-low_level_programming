#include <stdio.h>
/**
 * main - print the number of arguments
 * @argc: number of arguments
 * @argv: array
 */
void main(int argc, char *argv[])
{
	if (*argv)
	{
		printf("%d\n", argc - 1);
	}
}
