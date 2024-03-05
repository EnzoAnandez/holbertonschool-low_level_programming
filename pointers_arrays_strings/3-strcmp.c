#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - function that compares two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int e, a;

	a = 0;

	for (e = 0; s1[e] != '\0' && s2[e] != '\0'; e++)
	{
	a = s1[e] - s2[e];
	if (s1[e] != s2[e])
	{
		return (a);
	}
	}
	return (0);
}
