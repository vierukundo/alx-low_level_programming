#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @str: string
 * Return: pointer
 */
char *cap_string(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
		}
		else
		{
			if (str[i - 1] == 32 || str[i - 1] == '\n' || str[i - 1] == '?')
			{
				if (str[i] >= 97 && str[i] <= 122)
					str[i] = str[i] - 32;
			}
			if (str[i - 1] == '\t' || str[i - 1] == '.' || str[i - 1] == '!')
			{
				if (str[i] >= 97 && str[i] <= 122)
					str[i] = str[i] - 32;
			}
			if (str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '"')
			{
				if (str[i] >= 97 && str[i] <= 122)
					str[i] = str[i] - 32;
			}
			if (str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{')
			{
				if (str[i] >= 97 && str[i] <= 122)
					str[i] = str[i] - 32;
			}
			if (str[i - 1] == '}')
			{
				if (str[i] >= 97 && str[i] <= 122)
					str[i] = str[i] - 32;
			}
		}
	}
	str[i] = '\0';
	return (str);
}
