#include "main.h"
/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int n;
	int m;
	int multi;
	for (n = 0; n <= 9; n++)
		for (m = 0; m <= 9; m++)
		{
			multi = n * m;
			_putchar(multi);
		}
		_putchar('\n');
}
