#include "main.h"

/**
 * swap_int - swap
 * @a: First operand
 * @b: Second operand
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
