#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y, z;

	x = 0;
	while (x < 10)
	{
		y = x + 1;
		while (y < 10)
		{
			z = y + 1;
			while (z < 10)
			{
				putchar(x + 48);
				putchar(y + 48);
				putchar(z + 48);

				if (x < 7)
				{
					putchar(',');
					putchar(' ');
				}
			z++;
			}
		y++;
		}
	x++;
	}
	putchar('\n');
	return (0);
}
