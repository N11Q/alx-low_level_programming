#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character being checked
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}