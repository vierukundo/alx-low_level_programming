#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @src: string one
 * @dest: string two
 * Return: pointer
 */
char *_strcat(char *dest, const char *src)
{
	char *dest_ptr = dest;
	const char *src_ptr = src;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src_ptr != '\0')
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
	}
	*dest_ptr = '\0';
	return (dest);
}
