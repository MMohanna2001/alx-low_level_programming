#include <stdio.h>
#include <string.h>

/**
 * _strcat - Connect
 * @dest: First operand
 * @src: Second operand
 * @n: Third
 *
 * Return: The sum of the two parameters
 */

char *_strncat(char *dest, char *src, int n)
{
	if (strlen(src) > n)
		src[n - 1] = '\0';
	strcat(dest, src);
	return (dest);
}
