#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a 2 dimensional grid
  * @grid: Input
  * @height: Input
  *
  * Return: Output
  */
void free_grid(int **grid, int height)
{
	int qad;

	for (qad = 0; qad < height; qad++)
	{
		free(grid[qad]);
	}

	free(grid);
}
