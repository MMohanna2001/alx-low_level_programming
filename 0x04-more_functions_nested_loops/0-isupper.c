#include <ctype.h>
#include <main.h>
/**
 * _isupper - Check number
 * @c: The number to be checked
 *
 * Return: 1 . 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
