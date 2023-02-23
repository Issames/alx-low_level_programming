#include "main.h"
/**
 * _isdigit - check for digithood
 * @n: character to check for the numberhood
 *
 * Return: 1 if is it a digit and 0 if not
 */
int _isdigit(int n)
{
if (n >= '0' && n <= '9')
	return (1);
return (0);
}
