#include "main.h"
/**
 * free_grid - free the allocated 2D array memory
 * @grid: double pointer to the allocated memory of 2D
 * @height: rows for @D array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);
	free(grid);
}
