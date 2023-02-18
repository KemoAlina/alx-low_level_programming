#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y;

	x = 0;
	while (x < 100)
	{
		y = x + 1;
		while (y < 100)
		{
			putchar(x / 10 + 48);
			putchar(x % 10 + 48);
			putchar(' ');
			putchar(y / 10 + 48);
			putchar(y % 10 + 48);

			if (x != 99 || y != 99)
			{
				putchar(',');
				putchar(' ');
			}
		y++;
		}
	x++;
	}
	putchar('\n');
	return (0);
}
