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

	char *dup = strdup(str);

	if (str == NULL)
		return ('\0');


	if (dup == NULL)
		return ('\0');

	return (dup);
}
