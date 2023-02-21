#include "main.h"
/**
 * print_alphabet_x10- print alphabet 10 times
 *
 * Return alphabet
 */
void print_alphabet_x10(void)
{
	int l = 0;
	int a;
	while (l < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		l++;
		_putchar('\n');
	}
}

