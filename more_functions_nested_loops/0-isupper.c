#include "main.h"

/**
 *_isupper - function that checks for uppercase character.
 *@c: variable
 * Return: 0
 */
int _isupper(int c)
{
		if (c >= 'A' && c <= 'Z')
			return (1);
		return (0);
}
