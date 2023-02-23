#include "main.h"
#include <stdio.h>
/**
 * _isdigit - a function that checks for a digit (0 through 9)
 *
 * Return 1 if c is a digit
 * Return 0 if c is not a digit
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
