#include "main.h"
/**
 * print_alphabet_x10 - prints all letters of the alphabet 10 times
 * Description - C programming basics
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0, ch;

	while (i < 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
		i++;
	}
}
