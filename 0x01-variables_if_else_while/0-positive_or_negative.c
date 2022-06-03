#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - assign a random number to the variable n each time it is executed,
 *  print whether the number stored in n is positve or negative.
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	      printf("%3d, is positive\n",n);
	else if(n==0)
		printf("%3d, is zero\n",n);
	else if(n<0)
		printf("%3d, is negative\n",n);
	return (0);
}
