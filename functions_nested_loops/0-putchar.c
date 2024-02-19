#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	char n[] = "_putchar\n";
	int i;	
		
	for (i = 0 ; n[i] != '\0'; i++)
	_putchar(n[i]);

return (0);
}
