#include "main.h"
#include <stdio.h>
/**
  * peint_line - is a function that draws lines
  * Description - uses argument to determine length
  * Return - 0 for success
  */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n > 0)
		{
			_putchar('_');
			i++;
		}
		else
			_putchar('\n');
	}
	_putchar('\n');
}
