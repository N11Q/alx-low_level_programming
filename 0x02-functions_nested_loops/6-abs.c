#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @r: int to be checked
 * Return: the absolute value of int
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	return (-r);
}