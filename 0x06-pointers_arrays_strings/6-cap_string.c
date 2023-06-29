#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - Connect
 * @c: First operand
 *
 * Return: The sum of the two parameters
 */

char *cap_string(char *c)
{

	int n = 0;
	char *mainchars = ",;.!?'\"(){} \n\t";

	if (c[n] >= 'a' && c[n] <= 'z')
		c[n] = c[n] - 32;


	while (c[n] != '\0')
	{
		if (strchr(mainchars, c[n]) != NULL)
		{
			if (c[n + 1] >= 'a' && c[n + 1] <= 'z')
				c[n + 1] = c[n + 1] - 32;
		}
		n++;
	}

	return (c);
}
