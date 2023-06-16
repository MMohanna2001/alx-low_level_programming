#include <stdio.h> 

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = '0';

	while (1)
	{
		putchar(c);
		if (c == '9')
			break;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
