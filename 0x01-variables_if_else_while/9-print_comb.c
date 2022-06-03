#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int no;

	for (no = 48; no < 58; no++)
	{
		putchar(no);
		if (no != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
