#include <stdio.h>
/**
 * main - print all letter accept q and e,
 * following a newline
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++) {
		if (ch != 'q' && ch != 'e') {
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
