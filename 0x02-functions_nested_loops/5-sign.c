#include "main.h"

/**
 * print_sign - Check a number 
 * @n: The number to be checked
 *
 * Return: 1 if the number is positive. 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}	
