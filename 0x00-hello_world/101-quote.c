#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *Sen = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, Sen, strlen(Sen));
	write(1, "\n", 1);
	return (1);
}
