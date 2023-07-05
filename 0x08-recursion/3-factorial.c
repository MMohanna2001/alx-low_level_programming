#include <stdio.h>
#include "main.h"

/**
 * factorial - see code
 * @n: arg1
 *
 * Return: print
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));

}
