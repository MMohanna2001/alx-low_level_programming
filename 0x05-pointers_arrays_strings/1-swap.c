#include "main.h"

/**
 * swap_int - Change
 * @a: Number
 * @b: Number
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
