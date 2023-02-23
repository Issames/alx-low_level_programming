#include "main.h"
/**
 * _isupper - check for uppercase
 * @n: character to checked for case
 *
 * Return: 1 if uppercase and 0 if lowercase
 */
int _isupper(int n)
{
if (n >= 'A' && n <= 'Z')
	return (1);
return (0);
}
