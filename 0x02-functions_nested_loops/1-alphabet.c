#include "main.h"

/**
 * print_alphabet - Prototype Function
*/

void print_alphabet(void)
{
	int alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
