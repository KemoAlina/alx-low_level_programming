#include "main.h"

/**
 * print_line - Entry Point
 *
 * @n: value
 *
 * Returns: 0
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		x = 1;
		while (x <= n)
		{
			_putchar('_');
			x++;
		}
	}
	_putchar('\n');
}
