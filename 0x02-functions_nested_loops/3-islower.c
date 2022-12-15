#include "main.h"
#include <stdio.h>
/**
 * _islower - checks for lower case characters
 * Description - C programming basics
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
