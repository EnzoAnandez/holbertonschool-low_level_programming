#include "main.h"

/**
 * print_rev - function that prints a string, in reverse.
 * @n: Variable 1.
 * @e: Variable 2.
 * @s: Variable pointer.
 */

void print_rev(char *s)

{
	int n, e;

	for (n = 0; s[n] != '\0'; n++)
	{}

	for (e = n - 1; e >= 0; e--)
	{
		_putchar(s[e]);
	}
	_putchar('\n');
}
