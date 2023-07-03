#include <stdio.h>
#include <unistd.h>

void puts2(char *str);
int _putchar(char c);

/**
 * puts2 - Function that prints every other character begining with the first
 * @str: string from main function
 * Description: Accepts a pointer to a string, and using _putchar, prints
 * to tstandard output alternate characters of the string
 * Return: void
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		if (*(str + 1) != '\0')
			str += 2;
		else
			break;
	}
	_putchar('\n');
}
