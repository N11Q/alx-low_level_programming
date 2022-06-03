#include <stdio.h>

/**
 * main -  prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int no;
	char ab;

	for (no = 48; no < 58; no++)
	{
		putchar(no);
	}
	for (ab = 'a'; ab <= 'f'; ab++)
	{
		putchar(ab);
	}
	putchar('\n');
	return (0);
}
