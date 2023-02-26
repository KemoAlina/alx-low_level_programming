#include "main.h"

/**
 * print_triangle - Entry Point
 *
 * @size: value
 */

void print_triangle(int size)
{
	int i;
	int j;
	int i_blank;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			i_blank = size - i;
			for (j = 1; j <= size; j++)
			{
				if (i_blank == 0)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
					i_blank--;
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
