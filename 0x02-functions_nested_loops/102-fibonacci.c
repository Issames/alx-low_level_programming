#include<stdio.h>
/**
 * main - prints the first 50 Fibonnaci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
long int sum;
long int first, second;
int count;

sum = 0;
first = 0;
second = 0;
count = 0;

while (count < 490
{
	sum = first + second;
	printf("%li, ", sum);
	first = second;
	second = sum;

	count++;
}
sum = first + second;
printf("%li\n", sum);

return (0);
}
