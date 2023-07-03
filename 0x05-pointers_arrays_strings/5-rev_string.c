#include <stdio.h>
#include <unistd.h>

void rev_string(char *s);
int _putchar(char c);

/**
 * rev_string - Function that reverses a string
 * @s: string pointer parameter to be reversed
 * Description: utilizes the swapping of characters from front to the back
 * Return: void
 */

void rev_string(char *s)
{
	char *lead;
	int count;

	lead = s;
	count = 0;
	while (*s)
	{
		count++;
		s++;
	}
	s--;
	while (lead < s)
	{
		char *ch;

		*ch = *lead;
		*lead = *s;
		*s = *ch;
		s--;
		lead++;
	}
}
