#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncpy - function that copies a string.
 * @dest: variable destination pointer.
 * @src: variable source pointer.
 * @n: variable bytes.
 * Return: always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int e;

	for (e = 0; e < n && src[e] != '\0' ; e++)
		dest[e] = src[e];
	for ( ; e < n; e++)
		dest[e] = '\0';
	return (dest);
}
