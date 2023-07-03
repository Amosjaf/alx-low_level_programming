#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
void print_rev(char *s);

/**
 * print_rev - Function that prints reverse of a string
 * @s: pointer to character string
 * Description: Prints out individual characters of a string from the
 * last to the first
 * Return: void
 */

void print_rev(char *s)
{
	char *firstStr;

	firstStr = s;
	while (*s != '\0')
		s++;
	s--;
	while (s != (firstStr - 1))
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
	
}

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
