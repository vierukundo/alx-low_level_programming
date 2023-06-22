#include "main.h"
/**
 * _strcmp -  function that compares two strings.
 * @s1: first string
 * @s2: another string
 * Return: result
 */
int _strcmp(const char *s1, const char *s2)
{
	size_t i;
	int result = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return (-1);
	}
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			result = (unsigned char)s1[i] - (unsigned char)s2[i];
			break;
		}
	}
	if (s1[i] != '\0' || s2[i] != '\0')
	{
		result = (unsigned char)s1[i] - (unsigned char)s2[i];
	}
	return (result);
}
