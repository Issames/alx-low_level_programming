#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers to 98
 * @n: starting integer
 *
 * Description: prints all the natural number for -98
 *
 * Return: void
 */

void print_to_98(int n)
{
if (n < 98)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
}
else if (n > 98)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
}
printf("98\n");
}
