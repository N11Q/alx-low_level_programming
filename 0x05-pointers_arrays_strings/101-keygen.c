#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pwd[100];
	int a, sum, b;

	sum = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		pwd[a] = rand() % 78;
		sum += (pwd[a] + '0');
		putchar(pwd[a] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			b = 2772 - sum - '0';
			sum += b;
			putchar(b + '0');
			break;
		}
	}
	return (0);
}
