#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - function that checks for alphabetic character.
 * @c: letter
 * Return: 1 if c is a letter, lowercase or uppercase
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if	(c >= 97 && c <= 122)
		return (1);
	return (0);
}
