#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers.
 * @a: Variable pointer 1.
 * @n: Variable pointer 2.
 */

void print_array(int *a, int n)
{
	for (n = 0; a[n] < 5; n++)
		{
		a[n] = n - 198;
		printf("%d", a[n]);
		if (n < 4 && a[n + 1] < 5)
			{
			printf(", ");
			}
		}
}
