#include "main.h"
/**
 * allocate_row - allocates memory for row
 * @str: string
 * Return: number of rows
 */
int allocate_row(char *str)
{
	int i, c = 0;

	for (; *str != '\0';)
	{
		if (*str != 32)
		{
			for (i = 0; *str != 32 && *str != '\0'; i++)
			{
				str = str + i;
			}
			c += 1;
		}
		str++;
	}
	return (c);
}
/**
 * strtow - The function returns a pointer to
 * an array of words in string
 * @str: string
 * Return: array of words
 */
char **strtow(char *str)
{
	int i, c = 0, j = 0, r = 0;

	char **ptr;

	static char **p;

	if (str == NULL)
		return (NULL);
	c = allocate_row(str);
	p = (char **)malloc(sizeof(char *) * (c + 1));
	if (p == NULL)
		return (NULL);
	ptr = p;
	for (; *str != '\0';)
	{
		if (*str != 32)
		{
			for (i = 0; *str != 32 && *str != '\0'; i++)
			{
				str = str + i;
			}
			if (j < c)
			{
				ptr[j] = (char *)malloc(sizeof(char) * (i + 1));
				j++;
			}
		}
		str++;
	}
	for (; *str != '\0';)
	{
		if (*str != 32)
		{
			for (i = 0; *str != 32 && *str != '\0'; i++)
			{
				str = str + i;
				if (r < c)
					ptr[r][i] = *str;
			}
			ptr[r][i] = '\0';
			r++;
		}
		str++;
	}
	ptr[c] = NULL;
	return (p);
}
