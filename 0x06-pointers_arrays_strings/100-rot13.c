#include <stdio.h>
#include "main.h"

char *rot13(char *);

/**
 * rot13 - substitution cipher that interchanges letters
 * @s: Input string to be converted from main or other function
 *
 * Description: Takes input character and switches it with a character 13
 * places forward or backward depending on the position of the character
 * Return: character string after involution
 */

char *rot13(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
        {
            s[i] += 13;
        }
        else if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
        {
            s[i] -= 13;
        }
        i++;
    }
    return s;
}

