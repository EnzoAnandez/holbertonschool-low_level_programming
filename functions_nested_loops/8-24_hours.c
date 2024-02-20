#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int e = 1440;
	int n = e / 60;
	int z = e % 60;

	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar(':');
	_putchar((z / 10) + '0');
	_putchar((z % 10) + '0');
	_putchar('\n');
}

