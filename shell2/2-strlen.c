#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: string
 * Return: length of string (Success)
 */
size_t _strlen(const char *s)
{
	const char *ptr = s;

	if (s == NULL)
	{
		return (0);
	}
	while (*ptr != '\0')
	{
		ptr++;
	}
	return (ptr - s);
}
