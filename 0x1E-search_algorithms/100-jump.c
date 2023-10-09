#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or 1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = (size_t)sqrt(size);
	size_t left = 0;
	size_t right = 0, i;

	if (array == NULL || size == 0)
		return (-1);
	while (right < size && array[right] < value)
	{
		left = right;
		right += jump;
	}
	if (right >= size)
		right = size - 1;
	for (i = left; i <= right; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
