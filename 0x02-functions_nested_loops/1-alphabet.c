#include "main.h"
/* Print alphabet function */

/**
 * print_alphabet function comment
 * Description: 'to print all letters of the alphabet using putchar
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
