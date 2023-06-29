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

	int start = 0;
	int end = n - 1;
	int temp;


	while (end > start)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
