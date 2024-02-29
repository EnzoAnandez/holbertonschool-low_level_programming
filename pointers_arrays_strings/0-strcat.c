#include "main.h"
#include <stdio.h>

/**
 * *_strcat - function that concatenates two strings.
 * @dest: Variable pointer.
 * @src: Variable pointer 2.
 * Return: return the value pointer.
 */

char *_strcat(char *dest, char *src)
{
	int e, a;

	for (e = 0; dest[e] != '\0'; e++)
	{
		_putchar(dest[e]);
	}
	_putchar('\n');

	for (a = 0; src[a] != '\0'; a++)
	{
		_putchar(src[a]);
	}
	for (e = 0; dest[e] != '\0'; e++)
	{
	}
	for (a = 0; src[a] != '\0'; a++)
	{
		_putchar(src[a]);
	}
	return (0);
}
