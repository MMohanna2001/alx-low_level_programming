#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char *string = "_putchar";
	int i = 0;

	while (string[i] != '\0')
	{
		putchar(string[i]);
		i++;
	}

	putchar('\n');

	return (0);
}
