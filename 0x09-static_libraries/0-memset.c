#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _memset - see code
 * @s: arg1
 * @b: arg2
 * @n: arg3
 *
 * Return: 1 if the number is positive. 0 otherwise
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
