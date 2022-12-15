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
			putchar(' ');
		}
		putchar('\\');
		putchar('$');
		putchar('\n');
	}
	}
	else {
		putchar('\n');
	}
}
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
