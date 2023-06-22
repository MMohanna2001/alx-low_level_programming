#include "main.h"

/**
 * times_table - Prints
 */

void times_table(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar('0' + (j * i));
			
			if (j == 9)
				_putchar('\n');

			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
