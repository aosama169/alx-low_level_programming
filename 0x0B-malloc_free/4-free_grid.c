#include <stdlib.h>

/**
 * free_grid - free the memory allocated for the grid
 * created by alloc_grid()
 * @grid: grid to free
 * @height: height
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

