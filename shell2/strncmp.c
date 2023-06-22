#include "main.h"
/**
 * _strncmp - it only compares the first (at most) n bytes of s1 and s2.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to compare
 * Return: 0 for match or difference between characters
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	if (s1 == NULL || s2 == NULL)
	{
		return (-1);
	}
	for (i = 0; i < n; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		if (s1[i] == '\0')
		{
			break;
		}
	}
	return (0);
}
