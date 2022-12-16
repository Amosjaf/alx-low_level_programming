#include "main.h"
#include <stdio.h>
/**
  * print_square - is a function that prints squares
  * Description - utilizes the pound symbol
  * Return - 0 for success
  */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (size > 0)
			{
			_putchar('#');
			}
			else {
			_putchar('\n');
			break;
			}
	}
		_putchar('\n');
	}
}
