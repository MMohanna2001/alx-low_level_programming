#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - see code
 * @s: arg1
 *
 * Return: print
 */

void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}

}
