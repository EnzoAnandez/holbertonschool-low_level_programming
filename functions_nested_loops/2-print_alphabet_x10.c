#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 * Null
 * Return: zero
 */

void print_alphabet(void)
{
		char n[] = "abcdefghijklmnopqrstuvwxyz\n";
		int i, j;
		for (j = 0; j < 10; j++) {
		for (i = 0 ; n[i] != '\0'; i++) {
		_putchar(n[i]);
		}
	}
}

int main(void) 
{
print_alphabet();

return 0;
}
