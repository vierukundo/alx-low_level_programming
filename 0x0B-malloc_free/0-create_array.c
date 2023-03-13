#include "main.h"
/**
 * create_array - create an array with malloc
 * @size: size
 * @c: character
 * Return: pointer to char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
