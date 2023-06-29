#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - Connect
 * @dest: First operand
 * @src: Second operand
 * @n: Third
 *
 * Return: The sum of the two parameters
 */

char *_strncpy(char *dest, char *src, int n)
{

	strncpy(dest, src, n);
	return (dest);
}
