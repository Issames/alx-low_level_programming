#include "main.h"
#include <limits.h>
/**
 * _atoi: function that generate random valid passwords.
 * @s: pointer
 *
 * Return: Always
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;
while (s[i] == ' ' || s[i] == '-' || s[i] == '+')
{
	if (s[i] == '-')
	{
		sign = -sign;
	}
i++;
}
while (s[i] != '\0')
{
	if (s[i] >= '0' && s[i] <= '9')
	{
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
		{
			if (sign == 1)
			{
				return INT_MAX;
            		}
			else
			{
				return INT_MIN;
            		}
        	}
	result = result * 10 +(s[i] - '0');
	}
	else
	{
		break;
	}
i++;
}
return result * sign;
}

