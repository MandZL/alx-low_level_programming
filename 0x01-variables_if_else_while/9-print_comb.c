#include <stdio.h>
/**
 * main - Write a program that prints all possible combinations of single-digit numbers.
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	for (n = 0; n <= 9; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
