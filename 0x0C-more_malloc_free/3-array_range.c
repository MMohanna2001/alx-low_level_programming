#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * array_range - Code
 * @min: arg1
 * @max: arg2
 * Return: re
 *
 */

int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
		return ('\0');

	arr = malloc(sizeof(int) * (max - min + 1));


	if (arr == NULL)
		return ('\0');

	for (i = 0; i < (max - min + 1); i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);

}
