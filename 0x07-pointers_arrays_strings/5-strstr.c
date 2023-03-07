#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to search through
 * @needle: string to match
 * Return: pointer to initial segment of haystack
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, start;
int nlen = 0;
start = 0;
if (*needle == '\0')
{
	return haystack;
}
while (needle[nlen] != '\0')
{
	nlen++;
}
for (i = 0; haystack[i] != '\0'; i++)
{
	start = i;
	for (j = 0; j < nlen && haystack[i] == needle[j]; j++, i++)
	{
		if (j == nlen - 1)
		{
			return (haystack + start);
		}
	}
}
return (0);
}
