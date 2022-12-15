#include "main.h"
#include <stdio.h>
/**
* print_most_numbers - is a function that excludes some numbers
* Description - uses control statements
* Return - 0 for success
*/
void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
