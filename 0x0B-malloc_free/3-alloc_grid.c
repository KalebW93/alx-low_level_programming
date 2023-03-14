#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - which creat 2-demenisonal array
 * @width: number of colomuns
 * @height: number of rows
 *
 * Return: two dimesional array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j = 0, k = 0, l = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid =  malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	while (i <  height)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (l = i; l >= 0; l--)
				free(grid[l]);
			free(grid);
			return (NULL);
		}
		i++;
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			grid[j][k] = 0;
		}
	}
	return (grid);
}
