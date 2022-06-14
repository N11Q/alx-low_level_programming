#include "main.h"

/**
 * _atoi -  convert a string to an integer.
 * @s: string to be printed
 * Return: string that is now an int
 * Otherwise 0
 */
int _atoi(char *s)
{
	int a, b, c, len, d, isdigit;

	a = 0;
	b = 0;
	c = 0;
	len = 0;
	d = 0;
	isdigit = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && d == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			isdigit = s[a] - '0';
			if (b % 2)
				isdigit = -isdigit;
			c = c * 10 + isdigit;
			d = 1;
			if (s[a + 1] < '0' || s[i + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}
