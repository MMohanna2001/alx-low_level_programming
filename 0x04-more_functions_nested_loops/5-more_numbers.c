#include "main.h"

/**
 * more_numbers - Prints "Hello"
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if ((i / 10) != 0)
				_putchar('0' + (i / 10));

			_putchar('0' + (i % 10));
		}
		
		_putchar('\n');
	}
}
