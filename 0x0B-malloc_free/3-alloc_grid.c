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
	ptr = (int **)malloc(sizeof(int *) * height);
	for (h = 0; h < height; h++)
		ptr[h] = (int *)malloc(sizeof(int) * width);
	if (ptr == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			ptr[h][w] = 0;
		}
	}
	return (ptr);
}
