#include "main.h"
/**
 * print_line - Draw Straight line according to parameter
 * @n: The number of line to draw
 *
 * Return: empty
 */
void print_line(int n)
{
int c;
if (n <= 0)
{
	_putchar('\n');
}
else
{
	for (c = 0; c < n; c++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
}
