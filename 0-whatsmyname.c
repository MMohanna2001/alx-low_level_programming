#include "main.h"

/**
 * main - Code
 * @argc: arg1
 * @argv: arg2
 *
 * Return: The sum of the two parameters
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
