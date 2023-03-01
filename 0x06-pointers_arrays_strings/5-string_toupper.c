#include "main.h"
/**
 * string_toupper - function that changes all
 * lowercase letters of a string to uppercase.
 * @array: string
 * Return: pointer to string
 */
char *string_toupper(char *array)
{
	int i = 0;

	while (array[i] != '\0')
	{
		if (array[i] >= 97 && array[i] <= 122)
		{
			array[i] = array[i] - 32;
		}
		else
		{
			i++;
			continue;
		}
		i++;
	}
	array[i] = '\0';
	return (array);
}
