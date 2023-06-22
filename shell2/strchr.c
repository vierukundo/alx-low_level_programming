#include "main.h"
/**
 * custom_strchr - a function locates a character
 * @c: character
 * @str: string
 * Return: pointer to first occurence of character
 */
char *custom_strchr(const char *str, int c)
{
	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
