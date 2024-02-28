#include "main.h"
#include <stdio.h>

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

	if (s[0] == '-')
	{
		e = -1;
		l++;
	}
	for (; s[l] != '\0'; l++)
		n = n * 10 + s[l] - '0';
	return (e * n);
}
