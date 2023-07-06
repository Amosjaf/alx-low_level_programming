#include <stdio.h>

int _atoi(char *s);

/**
 * _atoi - Converts digit characters in a string to numbers
 * @s: input string as parameter to the function from main
 *
 * Description: Function iterates through the characters of a string to
 * find consecutive digits as well as the sign(+ or -) before the first
 * digit encountered. If there are any other digits present in the string
 * after the first consecutive digits, they are ignored
 *
 * Return: an integer representative of the number found
 */

int _atoi(char *s)
{
	int i;
	int sign;
	int result;
	int started;

	i = 0;
	sign = 1;
	result = 0;
	started = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			started = 1;
		}

		else if (s[i] == '-' && s[i + 1] >= '0' && s[i + 1] <= '9' && started == 0)
		{
			sign = -1;
		}

		else if (s[i] == '+' && s[i + 1] >= '0' && s[i + 1] <= '9' && started == 0)
		{
			sign = 1;
		}

		else if (started)
		{
			break;
		}
		i++;
	}
	result *= sign;
	return (result);
}
