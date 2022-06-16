#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: 1st string to compare
 * @s2: 2nd string to comprare
 * Return: 0 if equal
 * less than zero if s1 < s2
 * greater than zero if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
