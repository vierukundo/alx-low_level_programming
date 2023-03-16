#include "main.h"
/**
 * array_range - function that creates an array of integers
 * @min: start value
 * @max: stop value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *ptr;

	int elements, i;

	if (min > max)
		return (NULL);
	elements = (max - min) + 1;
	ptr = malloc(elements * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < elements; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
