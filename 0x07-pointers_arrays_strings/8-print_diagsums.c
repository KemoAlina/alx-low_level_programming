#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_diagsums - Prototype function
 *
 * @a: - value
 * @size: -value
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i, j;

	/*Calculate the sum of the first diagonal*/
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
	}

	/*Calculate the sum of the second diagonal*/
	for (i = 0, j = size - 1; i < size; i++, j--)
	{
		sum2 += *(a + i * size + j);
	}

	/*Print the sums*/
	{
		printf("%d, ", sum1);
		printf("%d\n", sum2);
	}
