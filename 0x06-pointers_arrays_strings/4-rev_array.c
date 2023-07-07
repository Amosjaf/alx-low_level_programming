#include <stdio.h>

void reverse_array(int *a, int n);
void print_array(int *a, int n);

/**
 * reverse_array - reverses an array
 * @a: pointer to the first index of an array
 * @n: number of elements in the array
 *
 * Description: swaps the corrensponding index positions of an from the
 * front as well as the back of an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
