#include "main.h"
#include <stdio.h>
/**
 * _isupper - is a function to check if a character is upper case
 * Description - program uses the above function and header file
 * Return - always return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
