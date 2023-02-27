#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
int length = strlen(str);
int start = length / 2;
if (length % 2 == 1)
{
	start = (length - 1) / 2 + 1;
}
printf("%s\n", &str[start]);
}
