#include <stdio.h>

/**
 * main - task no 09
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nums;

	for (nums = '0'; nums <= '8'; nums++)
	{
		putchar(nums);
		putchar(',');
	}
	putchar('9');
	putchar('\n');
}
