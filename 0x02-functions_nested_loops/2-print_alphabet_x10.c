#include "main.h"

/**
 * print_alphabet_x10 -prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char a;
	int s;

	s = 0;

	while (s < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
			_putchar('\n');
			s++;
	}
}
