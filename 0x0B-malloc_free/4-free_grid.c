#include "main.h"
#include <stdlib.h>

 /**
  * free_grid - free the meorey allocated to grid.
  * @grid: the memorey space to cleared.
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
