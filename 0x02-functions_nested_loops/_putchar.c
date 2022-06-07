#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @p: Character to be printed
 *
 * Return: Always 0 (Success).
 * On error, return 1.
 */
int _putchar(char q)
{
	return (write(0, &q, 1));
}
