#include "main.h"
#include <stdio.h>

/**
 * *cap_string - function that capitalizes all words of a string.
 * @a: Pointer to a string.
 * Return: Pointer to the modified string.
 */

char *cap_string(char *a)
{
	int e;

	for (e = 0; a[e] != '\0'; e++)
	{
		if (e == 0 || a[e - 1] == ' '
				|| a[e - 1] == '\t'
				|| a[e - 1] == '\n'
				|| a[e - 1] == ','
				|| a[e - 1] == ';'
				|| a[e - 1] == '.'
				|| a[e - 1] == '!'
				|| a[e - 1] == '?'
				|| a[e - 1] == '"'
				|| a[e - 1] == '('
				|| a[e - 1] == ')'
				|| a[e - 1] == '{'
				|| a[e - 1] == '}')
		{
			if (a[e] >= 'a' && a[e] <= 'z')
			{
				a[e] -= 'a' - 'A';
			}
		}
	}

	return (a);
}
