#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers from n to 98.
 * @n: variable to exercise
 */

void print_to_98(int n)
	{
		if (n > 98)
		{
				int e;
				for (e = n; e < 98; e++)
						printf("%d, ", e);
		}
		else if (n < 98)
		{
				int e;

				for (e = n; e > 98; e--)
						printf("%d, ", e);
		}
		printf("98\n");
	}
