#include<stdio.h>
/**
 *
 *
 *
 *
 *
 */
int main(void)
{
int i,j,k;
for (i = 0; i<=9; i++)
{
	for (j = i + 1; j<=9; j++)
	{
		for (k = j + 1; k<=9; k++)
		{
			putchar('0'+ i);
			putchar('0' + j);
			putchar('0'+ k);
			if (i == 7 && j == 8 && k == 9)
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
}
return (0);

}
