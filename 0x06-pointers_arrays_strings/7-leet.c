#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * leet - Connect
 * @c: First operand
 *
 * Return: The sum of the two parameters
 */

char *leet(char *c)
{

	int n = 0;


	while (c[n] != '\0')
	{
		if (c[n] == 'A' || c[n] 'a')
		{
			c[n] = '4';
		}
		else if (c[n] == 'e' || c[n] == 'E')
			c[n] = '3';
		else if (c[n] == 'o' || c[n] == 'O')
			c[n] = '0';
		else if (c[n] == 't' || c[n] == 'T')
			c[n] = '7';
		else if (c[n] == 'l' || c[n] == 'L')
			c[n] = '1';
		n++;
	}

	return (c);
}
