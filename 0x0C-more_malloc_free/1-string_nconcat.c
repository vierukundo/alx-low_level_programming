#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 * Return: pointer to allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	static char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= (sizeof(s2) - 1))
		n = sizeof(s2) - 1;
	p = malloc(sizeof(s1) + n);
	if (p == NULL)
		return (NULL);
	ptr = p;
	while (*s1 != '\0')
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	while (n > 0 && *s2 != '\0')
	{
		*ptr = *s2;
		ptr++;
		s2++;
		n--;
	}
	*ptr = '\0';
	return (p);
}
