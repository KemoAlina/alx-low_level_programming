#include "main.h"

/**
 * most_numbers - Entry Point
 */

void more_numbers(void)
{
	int nums;
	int rows;

	rows = 0;
	while (rows < 10)
	{
		nums = 0;
		while (nums <= 14)
		{
			if (nums > 9)
			{
				_putchar(nums / 10 + 48);
			}
			_putchar(nums % 10 + 48);
			nums++;
		}
		_putchar('\n');
		rows++;
	}
}
