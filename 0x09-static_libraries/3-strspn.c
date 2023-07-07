#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strspn - see code
 * @s: arg1
 * @accept: arg2
 *
 * Return: 1 if the number is positive. 0 otherwise
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int num;

	num = strspn(s, accept);

	return (num);
}
