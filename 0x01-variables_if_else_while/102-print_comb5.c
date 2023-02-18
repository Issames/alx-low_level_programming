#include<stdio.h>
/**
 *
 *
 *
 *
 *
 *
 *
 */
int main(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
	for (j = i; j <= 9; j++)
	{
		putchar('0' + i);
		putchar('0' + j);
		if (i == 9 && j == 9)
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
