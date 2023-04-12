#include "main.h"
#include <stdlib.h>
/**
 * free_grid - functions that frees a two-dimensional grid
 * @grid: the grid in question
 * @height: the height of the array
 * Return: The grid and the height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
