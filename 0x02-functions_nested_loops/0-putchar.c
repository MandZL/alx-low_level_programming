#include <stdio.h>
#include "main.h"
/**
 * main- program that prints _putchar
 *
 * Return- 0 is always success
 *
 */
int main(void)
{
	char *s = "_putchar\n";

	while (*s)
	{
		_putchar(*s);
		s++;
	}

	return (0);
}
