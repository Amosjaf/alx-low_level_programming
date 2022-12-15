#include "main.h"
#include <stdio.h>
/**
  * print_diagonal - is a function that prints a diagonal-like pattern
  * Description - uses putchar
  * Return - 0 for success
  */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
	else {
		_putchar('\n');
	}
}
}
