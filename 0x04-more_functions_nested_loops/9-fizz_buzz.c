#include <stdio.h>
/**
 * print out from 1 to 100. Replace multiples of three with fizz, five with buzz
 * and three and five with fizzbuzz
 */
int main(void)
{
	int n;
	for (n = 1; n <= 100; n++)
		if (n % 3 == 0 && n % 5 != 0)
		{
		
			printf("Fizz ");
		}
		else if (n % 5 == 0 && n % 3 != 0)
		{
			printf("Buzz ");
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", n);
		}
	printf("\n");
}
