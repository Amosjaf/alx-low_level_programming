#include <stdio.h>

char *cap_string(char *);

/**
 * cap_string - function that capitalizes all the first characters of words
 * @s: string parameter
 *
 * Description: accepts a string as parameter, loops through the characters
 * while converting only characters preceeded by special characters or
 * symbols
 * Return: string
 */

char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	printf("%c\n", s[0]);
	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i - 1] == '-' || s[i - 1] >= '0' && s[i - 1] <= '9')
				continue;
			if (s[i - 1] < 'A' || s[i - 1] > 'z')
				s[i] -= 32;
		}
		else
			continue;
	}
	return (s);
}
