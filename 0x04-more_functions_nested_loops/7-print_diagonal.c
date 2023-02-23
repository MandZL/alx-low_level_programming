#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - prints diagonal line
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		int x;
		int y;
		for (x = 1; x <= n; x++)
			for (y = 1; y <= n; y++)
			{
				if (x == y)
				
				{
					_putchar('\\');
				}
				else if (y < x)
				{
					_putchar(' ');
				}
			}
		_putchar('\n')
	}
}
