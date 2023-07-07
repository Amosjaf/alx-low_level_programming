#include <stdio.h>

char *_strncpy(char *dest, char *src, int n);

/**
 * _strncpy - copies n bytes of string from src to dest
 * @dest: final string copied into
 * @src: string from which n characters are copied from
 * @n: number of bytes/characters to be copied from src
 *
 * Description: Function takes 3 arguements.
 * n characters are copied from
 * src to dest provided n is less than lenght of src. If n is greater than
 * length of src, src is copied into dest up until is last character.
 * The remaining characters in dest is terminated by a null character.
 * Return: dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}

	if (n < src_len)
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
