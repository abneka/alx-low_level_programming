#include <stdio.h>

/**
 * main - task no 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
		int l;

		int r;

		for (l = '0'; l <= '8'; l++)
		{
			for (r = l + 1; r <= '9'; r++)
			{
				putchar(l);
				putchar(r);
				if (l != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
		return (0);
}
