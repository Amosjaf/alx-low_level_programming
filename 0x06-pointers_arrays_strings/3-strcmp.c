#include <stdio.h>

int _strcmp(char *s1, char *s2);

/**
 * _strcmp - compares the characters of two strings
 * @s1: string parameter that is compared
 * @s2: string parameter is being compared with
 *
 * Description: function accepts two string parameters. It compares the
 * ASCII values of the first different set of characters it encounters by
 * subtracting s1 from s2
 * If s1 runs out of characters while looping, the null character '\0'
 * is compared with the character of s2 at the same index
 * Return: Interger value
 */

int _strcmp(char *s1, char *s2)
{
	int val;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	val = s1 - s2;
	return (val);
}
