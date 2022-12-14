#include "main.h"
/**
 * Short description of the program
 */

/**
 * print_alphabet function prints all letters of the alphabet using putchar
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
