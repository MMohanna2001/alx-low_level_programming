#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - Code
 * @str: arg1
 * Return: re
 *
 */

char *_strdup(char *str)
{

	char *dup;

	if (str == NULL)
		return ('\0');
	
	dup = strdup(str);

	if (dup == NULL)
		return ('\0');

	return ('\0');
}
