#include <stdio.h>

/**
 *  main - task no 02
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	char high;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (high = 'A'; high <= 'Z'; high++)
		putchar(high);
	putchar('\n');
	return (0);
}
