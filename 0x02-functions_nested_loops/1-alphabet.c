#include "main.h"
/* print_alphabet function */

/**
 * print_alphabet function comment
 * Description: 'to print all letters of the alphabet using putchar
 * Return: Always 0 (Success)
 */
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
