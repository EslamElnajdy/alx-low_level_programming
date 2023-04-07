#include "main.h"
/**
 * len - obtains length of a
 * @a: string
 * @b: integer to count length
 * Return: On success 1.
 */
int len(char *a, int b)
{
	if (*a == 0)
		return (b - 1);
	return (len(a + 1, b + 1));
}
/**
 * com - compares string vs string reverse
 * @n: string
 * @k: length
 * Return: On success 1.
 */

int com(char *n, int k)
{
	if (*n != *(n + k))
		return (0);
	if (*n == 0)
		return (1);
	return (com(n + 1,k - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 * Return: On success 1.
 */
int is_palindrome(char *s)
{
	int m;

	m = len(s, 0);
	return (com(s, m));
}
