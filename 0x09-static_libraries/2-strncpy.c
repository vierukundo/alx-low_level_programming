#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @src: string one
 * @dest: string two
 * @n: number of bytes
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	int j;

	i = 0;
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
