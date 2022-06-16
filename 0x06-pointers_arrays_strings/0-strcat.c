#include "main.h"

/**
 * _strcat -  concatenates two strings.
 * @dest: string getting appended
 * @src: string used for appeneding
 * Return: Pointer to destination *dest
 */
char _strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
