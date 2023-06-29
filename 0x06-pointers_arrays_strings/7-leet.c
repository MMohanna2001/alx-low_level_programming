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
	int *chars = {aAeEoOtTlL};
	int *nums = {4433007711};
	int i = 0;

	while (c[n] != '\0')
	{
		while (chars[i] != '\0')
		{
			if (c[n] == chars[i])
				c[n] == nums[i];
		}
		i = 0;
		n++;
	}

	return (c);
}
