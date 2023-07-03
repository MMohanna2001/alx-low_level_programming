#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rot13 - Connect
 * @c: First operand
 *
 * Return: The sum of the two parameters
 */

char *rot13(char *c)
{

	int n = 0;
	char *chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"; 
	int i = 0;

	while (c[n] != '\0')
	{
		while (chars[i] != '\0')
		{
			if (c[n] == chars[i])
				c[n] = rot13[i];

			i++;
		}

		n++;
	}


	return (c);
}
