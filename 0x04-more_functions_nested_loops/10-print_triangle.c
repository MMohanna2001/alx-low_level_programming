#include "main.h"

/**
 * print_triangle - Check if a number is greater than 0
 * @size: The number to be checked
 *
 * Return: 1 if the number is positive. 0 otherwise
 */

void print_triangle(int size)
{
	int i = 0;
	int j = 0;
	int k = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k < i + 1; k++)
			_putchar('#');
		_putchar('\n');
	}
}
