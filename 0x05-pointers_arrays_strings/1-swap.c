#include "main.h"

/**
 * swap_int - prototype function
 *
 * @a: value
 * @b: value
*/

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
