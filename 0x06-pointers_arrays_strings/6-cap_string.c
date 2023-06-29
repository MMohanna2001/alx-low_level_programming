#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - Connect
 * @c: First operand
 *
 * Return: The sum of the two parameters
 */

char *cap_string(char *)
{

	int n = 0;

	while (c[n] != '\0')
	{
		if (c[n] >= 'a' && c[n] <= 'z')
			c[n] = c[n] - 32;
		n++;
	}

	return (c);
}
