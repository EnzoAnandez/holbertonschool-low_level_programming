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
	int e;

	for (e = 0; dest[e] != '\0'; e++)
	{}
	n = 0;
	dest[e + n] = src[n];
	return (dest);
}
