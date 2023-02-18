#include<stdio.h>
/**
 * main - print double digit combos
 *
 * Description: print double digit combos
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9 ; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
				putchar('0' + i);
				putchar('0' + j);
				if (i == 8 && j == 9)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			
		}

	}

	return (0);
}
