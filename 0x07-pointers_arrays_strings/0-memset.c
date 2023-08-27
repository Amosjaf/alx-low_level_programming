#include <stdio.h>
#include "main.h"

char *_memset(char *s, char b, unsigned int n);
/**
* _memset - function that fills the first n bytes fo memory area
* pointed to by s with a the constant byte b
* @s - pointer to be filled
* @b - fillvalue character
* @n - Number of times the character fills the s
* Description: Function works similar to  the built in memset function
* Return: return s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *ptr;
	unsigned int i;

	ptr = (unsigned char *)s;

	for (i = 0; i < n; i++)
		ptr[i] = b;
	return (s);
}
