#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - see code
 * @s: arg1
 *
 * Return: print
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (s[0] != '\0')
	{
		len = len + 1;
		len += _strlen_recursion(s + 1);

	}

	return (len);

}
