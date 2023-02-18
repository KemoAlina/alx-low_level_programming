#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;

	x = 0;
	while (x <= 8)
	{
		y = x + 1;
		while (y <= 9)
		{
			putchar(48 + x);
			putchar(48 + y);

			if (x != 8 || y != 9)
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
