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
			putchar('1');
			break;
		}
		else
		{
			ch++;
			if (ch == 'z' && ch != c)
				putchar('0');
		}
	}
	putchar('\n');
	return (0);
}
