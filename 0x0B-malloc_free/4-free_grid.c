#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * free_grid - Code
 * @height: arg2
 * Return: re
 *
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

