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
			for (r = l++; r <= '9'; r++)
			{
				putchar(l);
				putchar(r);
				if (l != '9' && r != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
		return (0);
}
