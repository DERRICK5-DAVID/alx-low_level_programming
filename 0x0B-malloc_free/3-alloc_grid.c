#include <stdlib.h>
/**
 * alloc_grid - returns pointer to a 2 dimensional array of integers
 * @height: int value of height
 * @width: int value of width
 * Return: return grid
 */
int **alloc_grid(int width, int height)
{
	int j;
	int **grid;
	int i;

/* If width or height is 0 or negative, return NULL */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

/* Allocate memory for the grid */
	grid = malloc(sizeof(int *) * height);

/* If allocation fails, return NULL */
	if (grid == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < height; i++)
	{
/* Allocate memory for each row of the grid */
	grid[i] = malloc(sizeof(int) * width);

/* If allocation fails, free the memory allocated so far and return NULL */
	if (grid[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
			free(grid[j]);
		}
	free(grid);
	return (NULL);
	}

/* Initialize each element of the row to 0 */
	for (j = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
	}
/* Return the pointer to the grid */
	return (grid);
}
