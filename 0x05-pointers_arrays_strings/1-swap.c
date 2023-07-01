#include "main.h"

void swap_int(int *a, int *b);

/**
 * swap_int - swaps two integers a & b
 * @a: First input
 * @b: Second input
 *
 * Description: Accepts two pointers and swaps the items
 * by creating a third pointer c
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
