#include "main.h"

/**
 * _isalpha - Prototype function
 *
 * @c: number or alphabet
 *
 * Return: 1 if upper or lower else, 0 if not
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
