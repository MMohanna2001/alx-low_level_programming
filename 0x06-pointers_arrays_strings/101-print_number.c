#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_number - Connect
 * @n: First operand
 *
 * Return: The sum of the two parameters
 */

void print_number(int n)
{
	int num = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n != 0)
	{
		num = num * 10 + (n % 10);
		n = n / 10;
	}

	while (num <= 0)
	{
		_putchar('0' + (num % 10));
		num = num / 10;
	}

}
