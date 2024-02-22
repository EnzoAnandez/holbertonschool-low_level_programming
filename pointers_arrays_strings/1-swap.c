#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers.
 *@a: variable 1
 *@b: variable 2
 *@i: variable 3
 * Return: - Nothing
 */

void swap_int(int *a, int *b)

{
	int i = *a;

	*a = *b;
	*b = i;

}
