#include <stdio.h>

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
	int i;
	int check;

	i = 0;
	while (s[i] != '\0')
	{
		check = 1;
		while (check && s[i] >= 'A' && s[i] <= 'z' && s[i] != '\\' && s[i] != '`' && s[i] != '_' && s[i] != '[' && s[i] != ']' && s[i] != '^')
		{
			if (s[i] >= 'A' && s[i] <= 'M' || s[i] >= 'a' && s[i] <= 'm')
			{
				s[i] += 13;
				check = 0;
				break;
			}
			s[i] -= 13;
			check = 0;
		}
		i++;
	}
	return (s);
}

int main(void)
{
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    return (0);
}
