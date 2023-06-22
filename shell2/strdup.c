#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: string to be duplicated
 * Return: pointer to duplicate
 */
char *_strdup(const char *str)
{
	size_t org_size = 0;
	char *dup = NULL;
	char *dup_ptr = NULL;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[org_size])
	{
		org_size++;
	}
	dup = (char *)malloc(sizeof(char) * (org_size + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	dup_ptr = dup;
	while (*str)
	{
		*dup_ptr = *str;
		dup_ptr++;
		str++;
	}
	*dup_ptr = '\0';
	return (dup);
}
