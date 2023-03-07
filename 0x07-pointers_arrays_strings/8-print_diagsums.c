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
	iint sum1 = 0, sum2 = 0;

	for (int i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - i - 1));
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
