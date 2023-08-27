#include <stdio.h>
#include "main.h"

char *_memset(char *s, char b, unsigned int n);
/**
* _memset - Fills the first n bytes of memory pointed to by s
* @param s: Pointer to the memory area to be filled
* @param b: Fillvalue character
* @param n: Number of bytes to fills
* Description: Function works similar to the built in memset function
* Return: Pointer to the memory area s
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
