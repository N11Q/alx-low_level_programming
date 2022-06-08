#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded), followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int sum, sum3, sum5;
	int n;

	sum = 0;
	sum3 = 0;
	sum5 = 0;

	for (n = 0; n < 1024; ++n)
	{
		if ((n % 3) == 0)
		{
			sum3 = sum3 + n;
		} else if ((n % 5) == 0)
		{
			sum5 + sum5 + n;
		}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}
