#include "main.h"

/**
 * _isdigit - Entry Point
 *
 * @c: value
 *
 * Return: 1 and 0
*/

int _isdigit(int c)
{
	if ((c == 'a' && c <= 'z') || (c == 'A' && c <= 'Z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
