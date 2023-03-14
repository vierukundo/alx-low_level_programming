#include "main.h"
/**
 * str-length - calculate the string length
 * @ac: argement count
 * @av: array
 * Return: lenght
 */
int str_length(int ac, char **av)
{
	int r, len = 0;

	char *str;

	for (r = 0; r < ac; r++)
	{
		str = av[r];
		while (*str != '\0')
		{
			len++;
			str++;
		}
		len++;
	}
	return (len);
}
/**
 * argstostr - converts arguments to string
 * @ac: arguments count
 * @av: array of pointers to arguments
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	char *ptr;

	char *str;

	static char *p;

	int i, len, r;

	if (ac == 0)
		return (NULL);
	len = str_length(ac, av);
	p = (char *)malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
	ptr = p;
	for (r = 0; r < ac; r++)
	{
		str = av[r];
		for (; *str != '\0' && i < len; i++)
		{
			*ptr = *str;
			ptr++;
			str++;
		}
		*ptr = '\n';
		if (i < len - 1)
		{
			ptr++;
			i++;
		}

	}
	return (p);
}
