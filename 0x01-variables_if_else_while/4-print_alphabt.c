#include <stdio.h>
/**
 * main - print lowercase alphabet except for q and e
 * followed ny new line
 * Return: always 0 (sucess)
 */
int main(void)
{
	char x = 'a';
	while (x <= 'z')
	{
	if (x != 'e' && x != 'q')
	{
		putchar(x);
	}
	x++;
	}
	putchar('\n');
	return (0)
}

