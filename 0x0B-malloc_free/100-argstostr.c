#include "main.h"
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

	int r, i, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
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
	p = (char *)malloc(sizeof(char) * len);
	if (p == NULL)
		return (NULL);
	ptr = p;
	for (r = 0; r < ac; r++)
	{
		str = av[r];
		for (; *str != '\0' && i < len; i++)
		{
			*ptr = *str;
			str++;
		}
		*ptr = '\n';
	}
	return (p);
}
