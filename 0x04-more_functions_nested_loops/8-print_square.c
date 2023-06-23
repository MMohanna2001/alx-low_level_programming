#include "main.h"

/**
 * print_square - Check if a number is greater than 0
 * @n: The number to be checked
 *
 * Return: 1 if the number is positive. 0 otherwise
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;
	
	if (size == 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
