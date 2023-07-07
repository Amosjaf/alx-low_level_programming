#include <stdio.h>

char *string_toupper(char *);

/**
 * string_toupper - pointer to a function that returns the uppercase
 * of a string
 * @s: string parameter
 *
 * Description: Function accepts a string as parameter and returns the same
 * string but in uppercase letters
 * Return: string in uppercase
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else
			continue;
	}
	return (s);
}
