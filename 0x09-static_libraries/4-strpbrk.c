#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string one
 * @accept: string two
 * Return: pointer to character
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return (NULL);
}
