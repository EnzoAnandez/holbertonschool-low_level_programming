#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: variable pointer.
 * @n: number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int e, f, s;

	for (e = 0, f = n - 1; e < f; e++, f--)
	{
		s = a[e];
		a[e] = a[f];
		a[f] = s;
	}
}
