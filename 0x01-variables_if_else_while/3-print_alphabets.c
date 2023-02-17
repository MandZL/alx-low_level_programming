#include <stdio.h>

/**
 * main - print both lower and upper case alphabets
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;
	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
