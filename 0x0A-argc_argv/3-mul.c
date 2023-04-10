#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%s\n", argv[1] * argv[2]);
	}else
	{
		printf("%s\n","Error");
	}
	return (0);
}     
