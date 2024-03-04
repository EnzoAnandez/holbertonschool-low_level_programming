#include "main.h"
#include <stdio.h>

/**
 * *_strncat - function that concatenates two strings.
 * @dest: Variable pointer 1.
 * @src: Variable pointer 2.
 * @n: Variable bytes.
 * Return: return variable dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int e, a;

	for (e = 0; dest[e] != '\0'; e++)
	{}
	for (a = 0; a < n && src[a] != '\0'; a++)
	{
	dest[e + a] = src[a];
	}
	dest[e + a] = '\0';
	return (dest);
}
