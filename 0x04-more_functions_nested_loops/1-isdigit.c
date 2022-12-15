#include <stdio.h>
#include "main.h"
/**
* _isdigit - is a function that checks if a character is a number
* Description - Utilizes the putchar function
* Return - returns 0 or 1
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
