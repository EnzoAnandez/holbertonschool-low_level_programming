#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int n, e;

	for (n = 0; n < 24; e++)
	for (e = 0; e < 60; e++)
	{
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar(':');
	_putchar((e / 10) + '0');
	_putchar((e % 10) + '0');
	_putchar('\n');
	}
}
