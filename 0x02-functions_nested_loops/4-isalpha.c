#include "main.h"
/**
 * int _isalpha(int c)- check if input c is a letter
 *
 * Return 1 if letter and 0 if not
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
