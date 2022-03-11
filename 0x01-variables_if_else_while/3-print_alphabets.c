#include <stdio.h>

/**
 *  main - task no 02
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	char high = 'A';

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
		putchar(high);
		high++;
	}
	putchar('\n');
	return (0);
}
