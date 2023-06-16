#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';
	char c2 = 'A';


	for (c = 'a'; c <= 'z'; c++)
		putchar(c)
	for (c2 = 'A'; c2 <= 'Z' ; c2++)
		putchar(c2);
	putchar('\n');

	return (0);
}
