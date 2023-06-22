#include "main.h"

/**
 * print_line - Check if a number is greater than 0
 * @n: The number to be checked
 *
 * Return: 1 if the number is positive. 0 otherwise
 */

void print_line(int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
