#include "main.h"
#include <stdlib.h>
/**
 * create_array - Code
 * @size: arg1
 * @c: arg2
 * Return: re
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	if (size == 0 || c == '\0')
		return ('\0');
	
	arr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
