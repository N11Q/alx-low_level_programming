#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *  followed by a new line.
 *  @a: print from this number
 *
 */

void print_to_98(int a)
{
	int o, p;

	if (a <= 98)
	{
		for (o = a; o <= 98; o++)
		{
			if (o != 98)
				printf("%d, ", o);
			else if (o == 98)
				printf("%d\n", o);
		}
	} else if (a >= 98)
	{
		for (p = a; p >= 98; p--)
		{
			if (p != 98)
				printf("%d, ", p);
			else if (p == 98)
				printf("%d\n", p);
		}
	}
}
