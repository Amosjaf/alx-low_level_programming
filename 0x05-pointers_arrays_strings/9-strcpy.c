#include <stdio.h>

char *_strcpy(char *dest, char *src);

/**
 * _strcpy - copies string from src to dest
 * @dest: copied string parameter
 * @src: initial string to be copied
 *
 * Description: accepts a src string pointer to be copied into a
 * destination string pointer
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *tmp;

	tmp = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (tmp);
}
