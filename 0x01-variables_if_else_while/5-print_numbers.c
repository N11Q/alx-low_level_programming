#include <stdio.h>

/**
 * main -  prints all single digit numbers of base 10 starting from 0,
 *  followed by a new line.
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int no;

	for (no = '0'; no <= '9'; no++)
	{
		putchar(no);
	}
	putchar('\n');
	return 0;
}
