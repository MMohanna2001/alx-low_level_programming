#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strstr - see code
 * @haystack: arg1
 * @needle: arg2
 *
 * Return: 1 if the number is positive. 0 otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr;

	ptr = strstr(haystack, needle);

	return (ptr);
}
