#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string whose length is being returned
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
