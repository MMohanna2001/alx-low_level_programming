#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - Connect
 * @a: First operand
 * @n: Second operand
 *
 * Return: The sum of the two parameters
 */

void reverse_array(int *a, int n)
{

	int temp[n];
	int i = 0;
	int j = 0;

	for (i = 0; i < n; i++)
	{
		temp[i] = a[n - 1 - i];
	}

	for (j = 0; j < n; j++)
		a[j] = temp[j];
}
