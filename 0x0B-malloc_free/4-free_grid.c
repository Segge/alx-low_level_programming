#include "main.h"

/**
 *free_grid - Free a two dimensional grid previously created by
 *alloc_grid function.
 *@grid: grid to free up
 *@height: number of rows in the grid
 *
 *Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
