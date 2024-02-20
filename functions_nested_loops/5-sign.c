#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <unistd.h>

/**
 * print_sign - function that prints the sign of a number.
 * @n: letter
 * Return: 1
 */

int print_sign(int n)
{
	char e;

	if (n > 0)
	{
		e = '+';
		write(1, &e, 1);
		write(1, "\n", 1);
		return (1);
	}
	if (n == 0)
	{
		e = '0';
		write(1, &e, 1);
		write(1, "\n", 1);
		return (0);
	}
	if (n < 0)
	{
		e = '-';
		write(1, &e, 1);
		write(1, "\n", 1);
		putchar('-');
		return (-1);
	}
return (0);
}
