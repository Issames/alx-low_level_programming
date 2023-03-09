#include "main.h"
#include <math.h>
/**
 * is_primt_number - return if prime or not
 * @n: number
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n) {
if (n < 2)
{
	return (0);
}
for (int i = 2; i <= sqrt(n); i++)
{
	if (n % i == 0)
	{
		return (0);
	}
}
return (1);
}
