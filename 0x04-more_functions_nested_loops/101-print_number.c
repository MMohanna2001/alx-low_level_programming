#include "main.h"

/**
 * print_number - Check if a number is greater than 0
 * @n: The number to be checked
 *
 * Return: 1 if the number is positive. 0 otherwise
 */

void print_number(int n)
{
	int j = 0;

	if (n <= 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n >= 0)
	{
		j = j * 10;
		j = j + (n % 10);
		n = n / 10;
	}
	while (j >= 0)
	{
		_putchar('0' + (j % 10));
		j = j / 10;
	}
}
