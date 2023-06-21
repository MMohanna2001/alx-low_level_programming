#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - check if c is a lowercase letter.
 *
 * @c The character to be checked
 *  Returns 1 if 'c' is a lowercase letter, 0 otherwise.
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	/* Checking c */
	if (islower(c))
		return (1);

	else
		return (0);
}

