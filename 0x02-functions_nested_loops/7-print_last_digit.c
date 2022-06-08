#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @i: the int giving the last digit
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
	int s;

	if (i < 0)
		i = -i;

	s = i % 10;

	if (s < 0)
		s = -s;

	_putchar(s + '0');

	return (s);
}

