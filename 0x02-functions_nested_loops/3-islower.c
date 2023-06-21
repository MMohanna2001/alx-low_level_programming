#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - Check if a number is greater than 0
 * @c : The charachter to be checked
 *
 * Return: 1 if the number is positive. 0 otherwise
 */

int _islower(int c)
{
	/* Checking c */
	if (islower(c))
		return (1);

	else
		return (0);
}

