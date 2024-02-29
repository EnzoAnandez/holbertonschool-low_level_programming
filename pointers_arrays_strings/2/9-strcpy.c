#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - function that copies the string pointed to by src.
 * @dest: Pointer char.
 * @src: Pointer char 2.
 * Return: return value pointer.
 */

char *_strcpy(char *dest, char *src)
{
	int e;

	for (e = 0; src[e] != '\0'; e++)
	{
		dest[e] = src[e];
	}
	dest[e++] = '\0';
	return (dest);
}
