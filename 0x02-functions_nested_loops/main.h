#include <stdio.h>
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
