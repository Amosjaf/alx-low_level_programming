#include "main.h"
#include <stdio.h>
/**
  * _more_numbers - is a function that excludes some numbers
  * Description - uses control statements
  * Return - 0 for success
  */
void more_numbers(void)
{
	int i = '0', j = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	while (j <= '4')
	{
		_putchar('1');
		_putchar(j);
		j++;
	}
}
