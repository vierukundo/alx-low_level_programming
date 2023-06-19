#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: string
 * @c: the target character
 * Return: pointer to c
 */
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
