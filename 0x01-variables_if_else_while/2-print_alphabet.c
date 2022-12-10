#include <stdio.h>
/**
 * main - Entry point
 * 
 * Description: 'the program's description'
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 97;
	int i = 0;

	while (i < 26) {
		ch = ch + i;
		putchar(ch);
		i++;
	}
	putchar('\n');
	return (0);
}
