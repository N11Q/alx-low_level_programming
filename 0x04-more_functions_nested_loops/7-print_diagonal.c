#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: determines number of times character is printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int o, p;
		
		for (o = 0; o < n; o++)
		{
			for (p = 0; p < n; p++)
			{
				if (b == 1)
					_putchar('\\');
				else if (b < 1)
					_putchar(' ');
				}
				_putchar('\n');
		}
	}
}	
