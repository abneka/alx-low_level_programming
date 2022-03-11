#include <stdio.h>

/**
 * main - task no 08
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char nums;

	for (nums = '0'; nums <= '9'; nums++)
		putchar(nums);
	for (nums = 'a'; nums <= 'f'; nums++)
		putchar(nums);
	putchar('\n');
	return (0);
}
