#include "main.h"
#include <stdio.h>
/**
* _print_numbers - function prints integers from 0-9
* Description - uses putchar
* Return - 0 for succes
*/
int _putchar(char c);
void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
_putchar('\n');
}
