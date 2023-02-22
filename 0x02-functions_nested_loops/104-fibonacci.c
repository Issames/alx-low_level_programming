#include<stdio.h>
/**
 * main - fibunnacci 
 *
 * Description: Return all numbers start with 1 or 2
 *
 * Return: Always 0.
 */

int main(void)
{
int a = 1;
int b = 2;
int i, c;
printf("%d, %d, ", a, b);

for (i = 2; i < 98; i++)
{
	c = a + b;
	if (c >= 100)
	{
		break;
	}
	else if (c >= 10)
	{
		if (c / 10 == 1 || c / 10 == 2)
		{
			printf("%d, ", c);
		}
	}
	else
	{
		if (c == 1 || c == 2)
		{
			printf("%d, ", c);
		}
	}
	a = b;
	b = c;
}
printf("\n");
return (0);
}
