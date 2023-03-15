#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @height: int value of height
 * @grid: int grid
 * Return: return grid
 */
void free_grid(int **grid, int height)
{
	int i;

/* Free each row of the grid */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
/* Free the grid itself */
	free(grid);
}
