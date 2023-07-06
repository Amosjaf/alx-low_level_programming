#include <stdio.h>

char *_strcat(char *dest, char *src);

/**
 * _strcat - Concatenates a src string to a dest string
 * @dest: destination character string
 * @src: source string to be concatenatedd to dest
 *
 * Description: The function accepts two char pointers and concatenates
 * src string to the dest string. Null character of dest string is removed
 * and null character is added after the src is added to to the dest string
 * Return: a char pointer to main
 */

char *_strcat(char *dest, char *src)
{
	int dest_len;

	dest_len = 0;
	while (dest[dest_len])
	{
		dest_len++;
	}
	while (*src)
	{
		dest[dest_len] = *src;
		dest_len++;
		src++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
