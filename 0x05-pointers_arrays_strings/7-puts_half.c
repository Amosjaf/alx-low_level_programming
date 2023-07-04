#include <stdio.h>
#include <unistd.h>

void puts_half(char *str);
int _putchar(char c);

/**
 * puts_half - prints the second half of a string
 * @str: pointer to a string being passed as a parameter from main
 * Description: Finds the length of the string, determines the middle
 * point then iterates backwards to the middle
 * Return: void
 */

void puts_half(char *str)
{
	char *middle;
	char *end;
	int count, i, mid;

	middle = str;
	end = str;
	count = 0;
	i = 0;
	while (*end)
	{
		count++;
		end++;
	}
	mid = (count - 1) / 2;
	middle = str + mid;
	while (middle < end)
	{
		_putchar(*middle);
		middle++;
		i++;
	}
	_putchar('\n');
}
