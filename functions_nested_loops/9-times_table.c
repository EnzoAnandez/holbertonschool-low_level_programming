#include <unistd.h>
#include "main.h"

/**
 *  * times_table - prints the 9 times table, starting with 0.
 *   *
 *    * Return: void
 *     */
void times_table(void)
{
	int i, j, n;
	char c;

		for (i = 0; i <= 9; i++)
		{
			for (j = 0; j <= 9; j++)
			{
				n = i * j;

				if (n <= 9)
					c = n + '0';
				else
				{
					write(1, &((n / 10) + '0'), 1);
					write(1, &((n % 10) + '0'), 1);

				}

				write(1, &c, 1);

				if (j < 9)
				{
					write(1, ",", 1);
					write(1, " ", 1);

					if (n + i <= 9)
						write(1, " ", 1);
																																				            
				}
																							        
			}
			write(1, "\n", 1);

		}

}
