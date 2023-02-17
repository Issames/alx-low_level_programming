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

	i = 48;
	j = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			putchar(i);
			putchar(j);

			if (i < 57 || j < 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}

		i++;
	}
	putchar(10);

	return (0);
}
