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
			putchar('#');
			}
			else {
			putchar('\n');
			break;
			}
	}
		putchar('\n');
	}
}
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}

