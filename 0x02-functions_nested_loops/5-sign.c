#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: is an integer
 *
 * Return: 1 (is positive), 0(is zero), -1(if negative)
 */

int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n < 0)
{
	_putchar('-');
	return (-1);
}
else
{
	_putchar('0');
	return (0);
}
}
