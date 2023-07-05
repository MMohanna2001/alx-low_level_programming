#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - see code
 * @x: arg1
 * @y: arg2
 *
 * Return: print
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
