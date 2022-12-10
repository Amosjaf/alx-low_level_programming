#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
	for (j = '0'; j <= '9'; j++)
	{
	if (i == j || j < i)
	continue;
else {
	putchar(i);
	putchar(j);
	putchar(',');
	putchar(' ');
}
}
}
putchar('\n');
return (0);
}
