#include "search_algos.h"
/**
 * _binary_search - Searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @left: The left index of the current search range.
 * @right: The right index of the current search range.
 * @value: The value to search for.
 * Return: The index where the value is located, or -1 if not found.
 */
int _binary_search(int *array, int left, int right, int value)
{
	int mid, i;

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == left)
				printf("%d", array[i]);
			else
				printf(", %d", array[i]);
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
/**
 * exponential_search - Searches for a value in a sorted array
 * of integers using the Exponential search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The index where the value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, left, right;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}
	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	right = (bound < size - 1) ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, right);
	left = bound / 2;
	return (_binary_search(array, left, right, value));
}
