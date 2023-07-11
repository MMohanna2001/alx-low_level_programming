#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * alloc_grid - Code
 * @width: arg1
 * @height: arg2
 * Return: re
 *
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **arr;
	
	if (width == 0 || height == 0)
		return ('\0');
	arr = malloc(sizeof(int *) * height);
	
	if (arr == NULL)
		return ('\0');

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
			return ('\0');
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
