#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strchr - see code
 * @s: arg1
 * @c: arg2
 *
 * Return: 1 if the number is positive. 0 otherwise
 */

char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = strchr(s, c);

	return (ptr);
}
