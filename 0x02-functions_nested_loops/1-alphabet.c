#include "main.h"
/**
 * Print alphabet initial comment
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

/**
 * Print alphabet function to print all letters of the alphabet using putchar
 * Description: 'the program's description'
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
