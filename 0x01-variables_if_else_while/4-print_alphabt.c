#include <stdio.h>
/**
 * main -prints the alphabet in lowercase except q and e
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ab= 'a';
	while (ab <= 'z')
	{
		if (ab != 'e' && ab != 'q')
		{
			putchar(ab);
		}
		ab++;
	}
	putchar('\n');
	return (0);
}
