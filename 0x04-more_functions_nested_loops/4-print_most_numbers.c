#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - prints numbers to 9 except 2, 4
 */
void print_most_numbers(void)
{
	int x;
	for (x = 0; x <= 9; x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
