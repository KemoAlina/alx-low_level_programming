#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c: value
 *
 * Return: 1 and 2
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
