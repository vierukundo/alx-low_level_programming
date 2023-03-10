#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @src: string one
 * @dest: string two
 * @n: size of destination
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
