#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints string backwards
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
	i++;
}
i--;
while (i >= 0)
{
	putchar(s[i] + '0');
	i--;
}
putchar(13);
}
