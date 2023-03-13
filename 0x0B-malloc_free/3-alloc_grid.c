#include "main.h"
/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width or row
 * @height: column
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;

	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(sizeof(int *) * width);
	for (w = 0; w < width; w++)
		ptr[w] = (int *)malloc(sizeof(int) * height);
	if (ptr == NULL)
		return (NULL);
	for (w = 0; w < width; w++)
	{
		for (h = 0; h < height; h++)
		{
			ptr[w][h] = 0;
		}
	}
	return (ptr);
}
