#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints
 * @s: The string to be printed
 */

void print_rev(char *s)
{
	int size = strlen(s);
	int i = 0;

	for (i = size - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
