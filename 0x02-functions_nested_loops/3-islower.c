#include "main.h"
/**
 * int _islower(int c)- checks for lower case
 *
 * Return 1 if lower and lower if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
