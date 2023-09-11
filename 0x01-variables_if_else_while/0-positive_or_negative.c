#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;

	srand(time(0));
	k = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (k > 0)
		printf("%i is positive\n", k);
	else if (k < 0)
		printf("%d is negative\n", k);
	else
		printf("%d is zero\n", k);
	return (0);
}
