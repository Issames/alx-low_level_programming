#include<stdio.h>
/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
int i;
i = 97;
while (i < 123)
{
	putchar(i);
	i++;
}
putchar(10);
return (0);
}
