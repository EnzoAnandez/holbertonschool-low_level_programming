#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: Variable pointer.
 */

void rev_string(char *s)
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
