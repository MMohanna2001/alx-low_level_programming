#include "main.h"
#include <stdio.h>
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

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);


	return (0);
}
