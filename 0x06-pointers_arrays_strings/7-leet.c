#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @s: string array
 * Return: string array
 */
char *leet(char *s)
{
int i;
char leet_char[] = {'4', '3', '0', '7', '1'};
char lowercase[] = {'a', 'e', 'o', 't', 'l'};
char uppercase[] = {'A', 'E', 'O', 'T', 'L'};
for (i = 0; s[i] != '\0'; i++)
{
	int j;
	for (j = 0; j < 5; j++)
	{
		if (s[i] == lowercase[j] || s[i] == uppercase[j])
            	{
			s[i] = leet_char[j];
			break;
		}
	}
}
return (s);
}
