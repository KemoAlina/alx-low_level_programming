#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alphal;
	int alphah;

	alphal = 'a';
	while (alphal <= 'z')
	{
		putchar(alphal);
		alphal++;
	}

	alphah = 'A';
	while (alphah <= 'Z')
	{
		putchar(alphah);
		alphah++;
	}
	putchar('\n');
	return (0);
}
