#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * string_toupper - Connect
 * @c: First operand
 *
 * Return: The sum of the two parameters
 */

char *string_toupper(char *c)
{

	int n = 0;

	while (c[n] != NULL)
	{
		if (c[n] >= 'a' && c[n] <= 'z')
			c[n] = c[n] - 32;
		n++;
	}

	return (c);
}
