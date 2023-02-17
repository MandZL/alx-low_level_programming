#include <stdio.h>
/**
 * main - print alphabet in reverse
 * Return: alway 0 (success)
 */
int main(void)
{
	char x;
	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
