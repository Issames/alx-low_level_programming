#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
int r;
char letter = 'a';
for (r = 0; r < 10; r++)
{
	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
}

