#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if given letter is uppercase
 *
 * Return 1 if upper case
 * Return 0 if lower case
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

		
