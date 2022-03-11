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

		int ll;

		for (ll = '0'; ll <= '7'; ll++)
		{
			for (l = ll + 1; l <= '8'; l++)
			{
				for (r = l + 1; r <= '9'; r++)
				{
					putchar(ll);
					putchar(l);
					putchar(r);
					if (ll != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		putchar('\n');
		return (0);
}
