#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers.
 * @a: Variable pointer 1.
 * @n: Variable pointer 2.
 */

void print_array(int *a, int n)
{
	int e;

	for (n = 0; a[n] < 5; n++)
	{
		a[n] = n - 100;
	}
	if (n % 2 == 1)
	{n = n + 1; }
	for (e = 0; e < 5; e++)
	{
		printf("%d, ", a[e]);
	}
}
