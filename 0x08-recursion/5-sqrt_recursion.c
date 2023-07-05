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
	
	return (_sqrt(n, 0));

}

/**
 * _sqrt - see code
 * @n: arg1
 * @a: arg2
 *
 * Return: print
 */
int _sqrt(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);

	return(_sqrt(n, a + 1));
}
