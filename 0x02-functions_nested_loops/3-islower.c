#include "main.h"
#include <stdio.h>
/**
 * 3-islower - checks for lower case characters
 * Description - C programming basics
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch == c)
		{
			_putchar('1');
			break;
		}
		else
		{
			ch++;
			if (ch == 'z' && ch != c)
				_putchar('0');
		}
	}
	_putchar('\n');
	return (0);
}
