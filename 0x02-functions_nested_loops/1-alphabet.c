#include "main.h"
/**
 * print_alphabet function prints all letters of the alphabet using putchar
 * Description - C programming basics
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
