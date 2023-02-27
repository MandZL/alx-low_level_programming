#include "main.h"
/**
 * print_rev - Write a function that prints a string, in reverse, followed by a new line
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int line = 0;
	int n;

	while (*s != '\0')
	{
		line++;
		s++;
	}
	s--;
	for (n = line; n > 0; n--)
	{
		_putchar(*s);
