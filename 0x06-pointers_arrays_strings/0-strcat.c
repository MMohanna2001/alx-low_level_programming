#include <stdio.h>
#include <string.h>

/**
 * _strcat - Connect
 * @dest: First operand
 * @src: Second operand
 *
 * Return: The sum of the two parameters
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
