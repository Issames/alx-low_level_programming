#include<stdio.h>
/**
 * main - print single digit numbers
 *
 * Description: print single digit numbers with commas
 *
 * Return: Always 0
 */
int main(void)
{
int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}

	putchar(10);

	return (0);
}
