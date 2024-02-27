#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: Variable Pointer.
 */

void puts_half(char *str)
{
	int n, e;
		for (n = 0; str[n] != '\0'; n++)
		{
		if (e / 2 == 1)
		{e = e - 1; }
		}
	n = n / 2;
		for (e = n; str[e] != '\0'; e++)
		{
			_putchar(str[e]);
		}
	_putchar('\n');
}
