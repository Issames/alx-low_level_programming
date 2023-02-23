#include "main.h"

/**
 * more_numbers - prints numbers 0-14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
int line, n, r, l;
n = '0';
r = 0;
l = '9';
for (line = 0; line < 10; line++)
{
	while (r < 2)
	{
		while (n <= l)
		{
			if (l == '4')
				_putchar('1');
			_putchar(n);
			n++;
		}
		r++;
		l = '4';
		n = '0';
	}
	_putchar('\n');
	r = 0;
	n = '0';
	limit = '9';
}
}

