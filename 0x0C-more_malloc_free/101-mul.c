#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - multiple two positive numbers
 * @num1: number one
 * @num2: number two
 * @result: result of the multiplications
 * Return: the result of the two numbers
 */
int main(int argc, char **argv)
{
int num1, num2, result;
if (argc != 3)
{
	printf("Error\n");
	return 98;
}
for (int i = 1; i < argc; i++)
{
	char *arg = argv[i];
	while (*arg)
	{
		if (!isdigit(*arg))
		{
			printf("Error\n");
			return 98;
		}
	arg++;
	}
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;
printf("%d\n", result);
return 0;
}
