#include <stdio.h>

char *_strncat(char *dest, char *src, int n);

/**
 * _strncat - concatenates n number of bytes of src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be concatenated from src to dest
 *
 * Description: concatenated n number of bytes from src to dest
 * Return: char pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;
	int src_len;

	i = 0;
	dest_len = 0;
	src_len = 0;
	while (dest[dest_len])
	{
		dest_len++;
	}

	while (src[src_len])
	{
		src_len++;
	}

	while (i < n)
	{
		if (n >= 1 && n < src_len - 1)
		{
			dest[dest_len] = src[i];
			dest_len++;
			i++;
		}

		else
		{
			n = src_len;
			dest[dest_len] = src[i];
			dest_len++;
			i++;
		}
	}
	dest[dest_len] = '\0';
	return (dest);
}
