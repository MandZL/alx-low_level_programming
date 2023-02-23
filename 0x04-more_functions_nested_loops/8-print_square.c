#include "main.h"
#include <stdio.h>
/**
 * print_square - prints a square using #
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;
		int y;
		for (x = 1; x <= size; x++)
			for (y = 1; y <= size; y++)

			{
				_putchar('#');
			}
		_putchar('\n');
	}
}
