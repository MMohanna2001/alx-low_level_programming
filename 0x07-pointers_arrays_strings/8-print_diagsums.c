#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_diagsums - see code
 * @a: arg1
 * @size: arg2
 *
 * Return: 1 if the number is positive. 0 otherwise
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;


	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
		sum2 = sum2 + a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum1, sum2); 
}
