#include "main.h"
/**
 * _isalpha - checks if a character is an alphabet
 * Description - Lower case or upper case alphabet checker
 * c - integer parameter for function
 * Return: Always return 0 success
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

