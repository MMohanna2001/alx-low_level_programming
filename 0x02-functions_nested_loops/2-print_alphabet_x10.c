#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
	}
}
