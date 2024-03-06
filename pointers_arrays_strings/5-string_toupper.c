#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - function that changes all lowercase letters of a
 * string to uppercase.
 * @a: pointer.
 * Return: pointer to the string.
 */

char *string_toupper(char *a)
{
	int e;

	for (e = 0; a[e] != '\0'; e++)
	{
		if (a[e] >= 'a' && a[e] <= 'z')
		{
			a[e] -= 'a' - 'A';
		}
	}

	return (a);
}
