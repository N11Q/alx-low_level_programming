#include <stdio.h>

/**
 * main -  prints all possible different combinations of three digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p;
	int o;
	int k;

	for (p = 48; p < 58; p++)
	{
		for (o = 49; o < 58; o++)
		{
			for (k = 50; k < 58; k++)
			{
				if (k > o && o > p)
				{
					putchar(p);
					putchar(o);
					putchar(k);
					if (p != 55 || o != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
