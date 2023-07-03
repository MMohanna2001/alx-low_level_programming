#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strpbrk - see code
 * @s: arg1
 * @accept: arg2
 *
 * Return: 1 if the number is positive. 0 otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	ptr = strpbrk(s, accept);

	return (ptr);
}
