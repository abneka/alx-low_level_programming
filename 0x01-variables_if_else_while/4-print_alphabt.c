#include <stdio.h>

/**
 * main - task no 04
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low == 'q' || low == 'e')
			continue;
		putchar(low);
	}
	putchar('\n');
	return (0);
}
