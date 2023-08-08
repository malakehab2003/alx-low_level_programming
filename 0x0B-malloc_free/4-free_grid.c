#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2 dimensional grid
 *
 * Return: void
 *
 * @grid: the grid to free
 *
 * @height: the height of the grid
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
