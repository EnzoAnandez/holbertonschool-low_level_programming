#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: Variable pointer.
 */

void rev_string(char *s)
{
	int a, b;
	char c;

		for (a = 0; s[a] != '\0'; a++)
		{}
		for (b = a - 1; b > a / 2; b--)
		{
				c = s[b];
				s[b] = s[a - b];
				s[a - b] = c;
		}
}
