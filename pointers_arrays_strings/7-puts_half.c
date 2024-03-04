#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: Variable pointer.
 */

void puts_half(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n = n + 1)
	{}
	for (str[n] = n / 2; str[n] != '\0'; n++)
	{
	_putchar(str[n]);
	}
	_putchar('\n');
}
