#include <stdio.h>
#include "main.h"
void reset_to_98(int *n);

/**
 * main - check the code
 * Description -  calls the function and prints the value of n
 * Return - 0 for success
 */

int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}

/**
 * void reset_to_98 - changes the value of the paramenter to 98
 * @*n - pointer to an interger value
 * Description - accepts a pointer to an int and changes its value to 98
 * Return - void
 */

void reset_to_98(int *n)
{
	*n = 98;
}
