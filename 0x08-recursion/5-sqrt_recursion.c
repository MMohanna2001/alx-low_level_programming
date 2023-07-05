#include <stdio.h>
#include "main.h"

/**
 *  _sqrt_recursion - see code
 * @n: arg1
 *
 * Return: print
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	
	return (sqrt(n, 0));

}

/**
 *  sqrt - see code
 * @n: arg1
 * @a: arg2
 *
 * Return: print
 */
int sqrt(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);

	return(sqrt(n, a + 1));
}
