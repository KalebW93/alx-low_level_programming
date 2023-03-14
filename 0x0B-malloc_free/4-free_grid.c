#include "main.h"
#include <stdlib.h>

/**
  * free_grid - this free up the grid
  * @grid: the memorey space to cleared
  * @height: the number of alicated pointers
  *
  * Return: Nothing.
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
