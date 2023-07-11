#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * str_concat - Code
 * @s1: arg1
 * @s2: arg2
 * Return: re
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int count1 = 0;
	int count2 = 0;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	count1 = strlen(s1);
	count2 = strlen(s2);

	str = malloc(sizeof(char) * (count1 + count2 + 1));

	if (str == NULL)
		return ('\0');
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
