#include "main.h"

/**
 * print_diagonal - Check if a number is greater than 0
 * @n: The number to be checked
 *
 * Return: 1 if the number is positive. 0 otherwise
 */


void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n - 1 ; i++)
		_putchar(' ');

	_putchar('\\');
	_putchar('\n');
}
