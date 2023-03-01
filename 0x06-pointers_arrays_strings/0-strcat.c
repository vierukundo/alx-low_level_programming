#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @src: string one
 * @dest: string two
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
