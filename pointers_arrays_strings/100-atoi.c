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
	int n = 0;
	int e = 1;
	int l;

	if (s[0] == '-')
	{
		e = -1;
		l = 1;
	}
	else if (s[0] == '+')
	{
		l = 1;
	}
	else
	{
		l = 0;
	}
	for (l = l; s[l] != '\0'; l++)
	{
		if (s[l] >= '0' && s[l] <= '9')
		{
			n = n * 10 + (s[l] - '0');
		}
		else
		{
			break;
		}
	}
	return (e * n);
}
