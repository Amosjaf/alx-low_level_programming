#include <stdio.h>
#include <unistd.h>

void print_array(int *a, int n);
int _putchar(char c);

/**
 * print_array - prints the items of an array
 * @a: array parameter
 * @n: number of items in array to be printed
 *
 * Description: an array and an interger is passed into function
 * The number of items in to be printed is dependent on the n
 * Return: void
 **/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
