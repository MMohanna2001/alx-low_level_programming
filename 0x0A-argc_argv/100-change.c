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
	int input;
	int i = 0;
	int value = 0;
	int change[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	input = atoi(argv[1]);

	if (input < 0)
	{
		printf("0\n");
	}

	else
	{
		for (i = 0; i < 5 && input >= 0; i++)
		{
			while (input >= change[i])
			{
				input = input - change[i];
				value++;
			}
		}
	

		printf("%d\n", value);
	}

	return (0);
}
