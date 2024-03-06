#include "main.h"
#include <stdio.h>

/**
 * leet - function that encodes a string into 1337.
 * @s: Pointer to string s.
 * Return: Pointer to the string.
 */

char *leet(char *s)
{
	char leet[10] = {'O', 'o', 'L', 'l', 'E', 'e', 'A', 'a', 'T', 't'};
	int a, e;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (e = 0; e < 10; e += 2)
		{
			if (s[a] == leet[e] || s[a] == leet[e + 1])
			{
				s[a] = '0' + (e / 2);
				break;
			}
		}
	}

	return (s);
}
