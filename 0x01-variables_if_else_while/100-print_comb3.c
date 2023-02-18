#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nums;

	nums = 1;
	while (nums <= 89)
	{
		putchar(nums / 10 + 48);
		putchar(nums % 10 + 48);

		if (nums != 89)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
		nums++;
	}
	return (0);
}
