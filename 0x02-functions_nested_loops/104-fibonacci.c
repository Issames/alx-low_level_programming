#include<stdio.h>
/**
 * main - fibunnacci
 *
 * Description: Return all numbers start with 1 or 2
 *
 * Return: Always 0.
 */

int main()
{
int i;
unsigned long int fib[100];
fib[0] = 1;
fib[1] = 2;
printf("%lu, %lu, ", fib[0], fib[1]);
for (i = 2; i < 98; i++)
{
	fib[i] = fib[i-1] + fib[i-2];
	printf("%lu, ", fib[i]);
}
printf("\n");
return (0);
}

