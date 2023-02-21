#include "main.h"
/**
 * _isalpha - check for the alpahabetic character
 * @c: c is an ASCII code
 *
 * Return: 1 
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
else if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
{
	return (0);
}
}
