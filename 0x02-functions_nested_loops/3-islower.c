#include "main.h"
/**
 * Check - check for lowercase
 * @c: c is an ASCII character
 *
 * Return: 1 if lowercase
 */
int _islower(int c)
{
if ( c >= 'a' && c <= 'z')
{
	return (1);
}
else
{
	return (0);
}
}
