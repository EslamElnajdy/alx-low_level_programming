#include "main.h"
/**
 * string_toupper - Write a function that changes all lowercase letters of a
 * string to uppercase.
 *
 * @hi: This is the input string
 *
 * Return: Lowercase changed to uppercase of the string
 */
char *string_toupper(char *h)
{
	int index = 0;
	int de = 'a' - 'A';

	for (index = 0; h[index] != '\0'; ++index)
	{
		if (h[index] >= 'a' && h[index] <= 'z')
		{
			h[index] = h[index] - de;
		}
	}
	return (h);

}
