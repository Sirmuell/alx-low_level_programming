#include <stdio.h>

/**
 * main -print single digits starting from 0
 *
 * Return: return zero as the end
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		if (j > i)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8)

			{
				putchar(',');
				putchar('');
			}
		}
	}
	putchar('\n');
		return (0);
}
