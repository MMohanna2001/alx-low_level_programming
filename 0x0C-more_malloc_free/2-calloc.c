#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _calloc - Code
 * @nmemb: arg1
 * @size: arg2
 * Return: re
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return ('\0');

	int *arr = (int *)calloc(nmemb, size);

	if (arr == NULL)
		return ('\0');

}
