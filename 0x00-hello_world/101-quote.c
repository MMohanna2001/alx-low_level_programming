#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *Sen = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(1, Sen, sizeof(Sen) - 1);
	return (1);
}
