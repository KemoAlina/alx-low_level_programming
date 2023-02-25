#include "main.h"

/**
 * print_numbers - Entry Point
*/

void print_numbers(void)
{
	int ch = '0';

	while (ch <= '9')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
