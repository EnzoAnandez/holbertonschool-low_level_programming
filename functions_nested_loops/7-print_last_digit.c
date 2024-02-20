#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: variable
 * Return: always 0
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = -n;

	_putchar('0' + n);
	return (n);
}
