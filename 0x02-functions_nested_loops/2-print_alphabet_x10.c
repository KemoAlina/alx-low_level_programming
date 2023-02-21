#include "main.h"

/**
 * print_alphabet_x10 - Prototype function
*/

void print_alphabet_x10(void)
{
	int alpha;
	int times;

	times = 0;
	while (times <= 9)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
	_putchar('\n');
	times++;
	}
}
