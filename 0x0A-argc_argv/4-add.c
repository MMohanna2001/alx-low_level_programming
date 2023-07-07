#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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
	int j = 1;
	sum = 0'

	while (j < argc)
	{
		for (i = 0; i < strlen(argv[j]); i++)
		{
			if (isdigit(argv[j][i] == 0)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum = sum + atoi(argv[j]);
		j++;
	}

	printf("%d\n", sum);

	return (0);
}
