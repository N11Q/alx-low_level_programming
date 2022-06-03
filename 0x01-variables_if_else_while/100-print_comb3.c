#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;
	int q;

	for (s = 48; s <= 56; s++)
	{
		for (q = 49; q <= 57; q++)
		{
			if (q > s)
			{
				putchar(s);
				putchar(q);
				if (s != 56 || q != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
