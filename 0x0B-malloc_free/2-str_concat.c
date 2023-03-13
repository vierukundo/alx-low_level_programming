#include "main.h"
/**
 * str_concat - concanates strings
 * @s1: string one
 * @s2: string two
 * Return: concanated string
 */
char *str_concat(char *s1, char *s2)
{
	int s1_size, s2_size;

	char *concanated;

	static char *conc;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	s1_size = 0;
	while (s1[s1_size])
		s1_size++;
	s2_size = 0;
	while (s2[s2_size])
		s2_size++;
	conc = (char *)malloc(sizeof(char) * (s2_size + 1 + s1_size));
	if (conc == NULL)
		return (NULL);
	concanated = conc;
	while (*s1)
	{
		*concanated = *s1;
		concanated++;
		s1++;
	}
	while (*s2)
	{
		*concanated = *s2;
		concanated++;
		s2++;
	}
	*concanated = '\0';
	return (conc);
}
