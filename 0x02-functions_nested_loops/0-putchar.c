#include <stdio.h>
#include <main.h>
#include <unistd.h>
/**
 * main- program that prints _putchar
 *
 * Return- 0 is always success
 *
 */
int main(void)
{
	char *s = "_putchar";

	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');

	return (0);
}
