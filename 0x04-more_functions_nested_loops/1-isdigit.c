#include "main.h"

/**
 * _isdigit - that checks for a digit (0 through 9).
 * @c is the character checked
 * Return: 1 if c is a digit, 0 for otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	_putchar('\n');

	return (0);
}
