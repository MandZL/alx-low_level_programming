#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print 10 lines of 1 to 14
 */

void more_numbers(void)
{
	int x;
	int y = 0;
	while (y <= 9)
	{
		for (x = 0; x <= 14; x++)
		{
			_putchar(x);
			_putchar('\n');
		}
		y++;
		_putchar('\n');
	}
}

