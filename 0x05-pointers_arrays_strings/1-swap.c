#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: 1st pointer for swap
 * @b: 2nd pointer for swap
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
