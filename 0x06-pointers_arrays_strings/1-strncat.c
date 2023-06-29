#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - Connect
 * @dest: First operand
 * @src: Second operand
 * @n: Third
 *
 * Return: The sum of the two parameters
 */

char *_strncat(char *dest, char *src, int n)
{

	strncat(dest, src, n);
	return (dest);
}
