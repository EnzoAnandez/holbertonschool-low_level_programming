#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int f, c;
	f = 10;
	c = 10;

	for (int i = 0; i < f; i++)
	{
		for (int j = 0; j < c; j++)
		{
			int k = i * j;

			if (k < 10)
			{
				_putchar(k + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			_putchar('$');

			if (j < c - 1)
			{
				_putchar(',');
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
