#include "main.h"

/**
 * print_last_digit - Check if a number is greater than 0
 * @num: The number to be checked
 *
 * Return: 1 if the number is positive. 0 otherwise
 */

int print_last_digit(int num)
{
	int x = 0;

	x = num % 10;

	_putchar('0' + x);
	return (num % 10);
}
