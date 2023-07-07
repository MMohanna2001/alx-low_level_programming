#include "main.h"
#include <stdio.h>
#include <stdlib>
/**
 * main - Code
 * @argc: arg1
 * @argv: arg2
 *
 * Return: The sum of the two parameters
 */

int main(int argc, char *argv[])
{
	int n1;
	int n2;
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	product = n1 * n2;

	printf("%d\n", product);

	return (0);
}
