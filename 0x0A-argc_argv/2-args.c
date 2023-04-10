#include <stdio.h>
/**
 * main - print all arguments
 * @argc: number of arguments
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
