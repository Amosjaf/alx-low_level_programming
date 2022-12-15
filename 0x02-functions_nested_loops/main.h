#include <stdio.h>
#include <unistd.h>
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);

int _putchar(char c)
{
	return (write(1, &c, 1));
}
