#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return:Always 0 (Success)
 */

/* betty style doc for function main goes there */
void positive_or_negative()
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n % 10 == 0)
	{
		printf("%d is zero\n", n % 10);
	}
	else if (n % 10 < 0)
	{
		printf("%d is negative\n", n);
	}
}
