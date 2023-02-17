#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/**
 * main - input random number n and check if last digit is greater than 5, zero or less than 6 and not zero
 * Return: Always 0 (success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* find last digit using n%10 and make new variable lastdigit*/
	
	if (n%10 > 5
	
	return (0);
}
