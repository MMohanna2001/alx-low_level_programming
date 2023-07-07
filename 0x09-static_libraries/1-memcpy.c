#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _memcpy - see code
 * @dest: arg1
 * @src: arg2
 * @n: arg3
 *
 * Return: 1 if the number is positive. 0 otherwise
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
