#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 *@str: Variable pointer.
 */

void _puts(char *str)

{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
