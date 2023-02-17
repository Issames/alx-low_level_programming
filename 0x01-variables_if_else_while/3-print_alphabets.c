#include<stdio.h>
/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in lowercase then uppercase
 *
 * Return: Always 0
 */
int main(void)

int i,j;
i = 97;
j = 65;
while (i < 123)
{
        putchar(i);
        i++;
}
while (j < 91)
{
	putchar(j);
	j++;
}
putchar(10);
return (0);
}
