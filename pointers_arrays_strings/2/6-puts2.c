#include "main.h"

/**
 * puts2 - function that prints every other character of a string.
 * @str: Variable pointer.
 */

void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0' && str[n + 1] != '\0'; n = n + 2)
	{
		_putchar(str[n]);
	}
	if (str[n] != '\0')
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
