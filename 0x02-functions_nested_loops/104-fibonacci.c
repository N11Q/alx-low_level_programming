#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbe
 * rs, starting with 1 and 2, followed by a new line.
 * Return: Always 0 (Success)
 */
int main (void)
{
	int a;
	unsigned long int b, c, follows, sum;

	b = 1;
	c = 2;
	sum = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (b < 4000000 && (j % 2) == 0)
		{
			sum = sum + b;
		}
		follows = b + c;
		b = c;
		b = follows;
	}
	printf("%lu\n", sum);
	return (0);
}
