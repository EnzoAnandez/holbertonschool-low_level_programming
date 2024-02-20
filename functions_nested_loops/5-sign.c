#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_sign - function that prints the sign of a number.
 * @n: letter
 * Return: 1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	if (n == 0)
	{
		putchar('0');
		return (0);
	}
	if (n < 0)
	{
		putchar('-');
		return (-1);
	}
return (0);
}