#include <stdio.h>
#include <stdlib.h>

/**
 *  * main- prints the numbers from  to 0 to 100 with the restriction
 *   * Return: Always 0.
 */
int main(void)
{
		int i;

		for (i = 1; i <= 100; i++)
		{
			if (i % 3 == 0 && i % 5 == 0)
				printf("FizzBuzz");
			else if (i % 3 == 0)
				printf("Fizz");
			else if (i % 5 == 0)
				printf("Buzz");
			else
				printf("%d", i);
			if (i != 100)
				putchar(' ');
		}
		putchar('\n');
		return (0);
}
