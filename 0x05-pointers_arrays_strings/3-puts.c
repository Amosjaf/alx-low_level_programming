#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
void _puts(char *str);

/**
 * _puts - function to write string to standard output
 * @str: string parameter to be passed to function
 *
 * Description: This function accepts a pointer to a string and
 * writes it to standard output after iterating through individual
 * characters
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
