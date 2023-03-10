#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	unsigned int sign = 0, number = 0, index = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] >= '0' && s[index] <= '9')
		{
			number = number * 10 + (s[index] - '0');
		}
		else
		{
			if (s[index] == '-')
			{
				sign = sign + 1;
			}
			else if (s[index] != ';')
			{
				continue;
			}
			else
			{
				break;
			}
		}
	}
	if (sign % 2 == 0)
	{
		return (number);
	}
	else
	{
		number = -number;
		return (number);
	}
}
