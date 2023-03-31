#include "main.h"
/**
 * string_toupper - Write a function that changes all lowercase letters of a
 * string to uppercase.
 *
 * @hi: This is the input string
 *
 * Return: Lowercase changed to uppercase of the string
 */
char *string_toupper(char *he)
{
	int index = 0;
	int de = 'a' - 'A';

	for (index = 0; he[index] != '\0'; ++index)
	{
		if (he[index] >= 'a' && he[index] <= 'z')
		{
			he[index] = he[index] - de;
		}
	}
	return (he);
}
