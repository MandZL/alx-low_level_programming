#include <stdio.h>
/**
 * main - prints lower case alphabet using putchar
 * new line
 * Return: Always 0 success
 */

int main(void)
{
 	for (int x = 'A'; x <= 'Z', x++)
		{
			putchar(tolower(x));
		}
	putchar(\n);
	return (0);
}

