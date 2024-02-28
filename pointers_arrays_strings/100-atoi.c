#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - function that convert a string to an integer.
 * @s: - Variable pointer.
 * Return: int of string.
 */

int _atoi(char *s)
{
	int n = 0, e = 0, l = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			if (n == 0)
				n = 1;
			else
				n = 0;
		}

		if (*s >= '0' && *s <= '9')
		{
			if (!l)
				l = 1;
			if (e < 0)
				e = e * 10 - (*s - '0');
			else
				e = -(*s - '0');
		}
		else if (l)
			break;
		s++;
	}

	if (!n)
		e = -e;
	return (e);
}
