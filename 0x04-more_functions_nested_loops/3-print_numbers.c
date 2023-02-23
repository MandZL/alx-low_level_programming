#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers form 0 to 9
 */
void print_numbers(void)
{
	int x;
	x = 0;
	for (x < 10)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}

