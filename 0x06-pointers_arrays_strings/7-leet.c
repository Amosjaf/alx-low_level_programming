#include <stdio.h>

char *leet(char *);

/**
 * leet - Encodes specific letters in a string
 * @s: input string for specific character encoding
 *
 * Description: Function loops through string and compares each character
 * to specific letters contained in multidimentional array. If the
 * character matches those at column index 0 and 1 of the array, the
 * number at the corresponding index 2 replaces the character
 * Return: string
 */
char *leet(char *s)
{
	int leet_str;
	int i;

	char leet_arr[5][3] = {
		{'a', 'A', '4'},
		{'e', 'E', '3'},
		{'o', 'O', '0'},
		{'t', 'T', '7'},
		{'l', 'L', '1'}
	};
	leet_str = 0;

	while (s[leet_str] != '\0')
	{
		i = 0;
		while (i < 5)
		{
			if (s[leet_str] == leet_arr[i][0] || s[leet_str] == leet_arr[i][1])
			{
				s[leet_str] = leet_arr[i][2];
			}
			i++;
		}
		leet_str++;
	}
	return (s);
}
