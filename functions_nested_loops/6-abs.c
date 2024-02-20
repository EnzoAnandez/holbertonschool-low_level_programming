#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @n: variable
 * Return: n
 */

int _abs(int n)

{
	if (n < 0)
		n = -n * -1; /*tambien lo puedo usar asi "n = -n" */
	return (n);
}
