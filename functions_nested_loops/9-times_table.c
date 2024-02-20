#include <unistd.h>
#include "main.h"

/**
 *  * times_table - prints the 9 times table, starting with 0.
 *    * Return: void
 *     */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			if (n <= 9)
				_putchar(n + '0');
			else
			{
				_putchar(',');
				_putchar(' ');

				if (n + i <= 9)
					_putchar(' ');
			}
		}
	}
}