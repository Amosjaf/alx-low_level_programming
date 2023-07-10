#include <stdio.h>

char *rot13(char *);

/**
 * rot13 - substitution cipher that interchanges letters
 * @s: Input string to be converted from main or other function
 *
 * Description: Takes input character and switches it with a character 13
 * places forward or backward depending on the position of the character
 * Return: character string after involution
 */

char *rot13(char *s)
{
	int i;
	int check;

	i = 0;
	while (s[i] != '\0')
	{
		check = 1;
		while (check && s[i] >= 'A' && s[i] <= 'z')
		{
			if (s[i] >= 'A' && s[i] <= 'M' || s[i] >= 'a' && s[i] <= 'm')
			{
				s[i] += 13;
				check = 0;
				break;
			}
			s[i] -= 13;
			check = 0;
		}
		i++;
	}
	return (s);
}
