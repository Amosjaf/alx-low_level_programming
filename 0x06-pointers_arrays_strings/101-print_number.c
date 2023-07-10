#include <stdio.h>

void print_number(int n);
int _putchar(char c);

/**
 * print_number - prints to standard output interger using _putchar
 * @n: integer parameter to be printed
 *
 * Description: Function finds the degree of the decimal number by looping
 * through a constant which is a multiple of 10. The quotient is converted
 * to a string and it represents the highest digit. The remainder becomes
 * the integer constant to be divided by a lesses multiple of 10
 * Return: void
 */

void print_number(int num)
{
	int n;
	int index;

	n = 1;
	if (num == 0)
	{
		_putchar('0');
	}
	if (num < 0)
	{
		num = num - 2 * num;
		_putchar('-');
	}
	while (num >= n)
	{
		n = n * 10;
	}
	n = n / 10;
	while (num > 0)
	{
		index = num / n;
		_putchar(index + '0');
		num = num % n;
		n = n / 10;
	}
}
