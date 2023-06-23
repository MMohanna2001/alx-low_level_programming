#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long long num = 612852475143;
	int max = 0;
	int i = 0;
	int j = 0;

	while (num % 2 == 0)
	{
		max = 2;
		num = num / 2;
	}

	while (num % 3 == 0)
	{
		max = 3;
		num = num / 3;
	}

	for (i = 5; i <= sqrt(num); i += 6)
	{
		while (num % i == 0)
		{
			max = i;
			num = num / i;
		}
		while (num % (i + 2))
		{
			max = i + 2;
			num = num / (i + 2);
		}
	}

	printf("%d", max);

	return (0);
}
