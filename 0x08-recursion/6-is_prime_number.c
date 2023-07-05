#include <stdio.h>
#include "main.h"

/**
 *  _sqrt_recursion - see code
 * @n: arg1
 *
 * Return: print
 */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);

	return (_prime(n, n - 1));

}

/**
 * _prime - see code
 * @n: arg1
 * @a: arg2
 *
 * Return: print
 */
int _prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);

	return (_prime(n, a - 1));
}
