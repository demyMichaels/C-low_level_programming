#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - print out a string to standard output
*Return: always (0) if successful
*/
int main(void)
{
	int n;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
