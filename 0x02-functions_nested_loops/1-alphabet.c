#include "main.h"
/**
 * Print alphabet function
 * Description: 'the program's description'
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
