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
	int l = 0;

	while (s[l] == ' ' || (s[l] >= 9 && s[l] <= 13))
	{
		l++;
	}
	if (s[l] == '-' || s[l] == '+')
	{
		e = (s[l++] == '-') ? -1 : 1;
	}
	while (s[l] >= '0' && s[l] <= '9')
	{
		n = n * 10 + (s[l++] - '0');
	}
	return (e * n);
}
