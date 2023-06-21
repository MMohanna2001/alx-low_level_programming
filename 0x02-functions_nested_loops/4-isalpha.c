#include "main.h"
#include <ctype.h>

/**
 * function - Check if a number is upper or lower Case
 * @c : The charachter to be checked
 *
 * Return: 1 if the number is positive. 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
