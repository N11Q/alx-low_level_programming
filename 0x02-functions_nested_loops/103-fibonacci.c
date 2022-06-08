#include <stdio.h>

/**
 * main -  program that finds and prints the sum of the even-valued terms,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	unsigned long int b, c, follows, sum;

	b = 1;
	c = 2;
	sum = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (b < 4000000 && (b % 2) == 0)
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
