#include "main.h"
#include <stdio.h>

/**
 * leet - function that encodes a string into 1337.
 * @s: Pointer to string s.
 * Return: Pointer to the string.
 */

char *leet(char *s)
{
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
	int a, e;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (e = 0; e <= 7; e++)
			{
			if (s[a] == leet[e] || (s[a] - 32 == leet[e] && s[a] >= 'a' && s[a] <= 'z'))
			{
				s[a] = e + '0';
				break;
			}
		}
	}

	return (s);
}
