#include <stdio.h> 

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (1)
	{
		putchar('0' + i);
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');

		i++;
	}

	putchar('\n');

	return (0);
}
