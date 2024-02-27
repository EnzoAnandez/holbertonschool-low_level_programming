#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: Variable Pointer.
 */

void puts_half(char *str)
{
	int n, e;
		for (n = 0; str[n] != '\0'; n++)
		{}
		n = n - 1;
		for (e = n; e > n / 2; e--)
		{
		_putchar(str[n]);
		}	
		_putchar('\n');
}
