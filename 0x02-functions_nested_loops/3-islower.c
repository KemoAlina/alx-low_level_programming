#include "main.h"

/**
 * _islower - Protoype function
*/

int _islower(int c)
{
	if ((c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
