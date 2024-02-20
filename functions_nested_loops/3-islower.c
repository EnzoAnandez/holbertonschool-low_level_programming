#include <stdio.h>
#include <ctype.h>

/**
 * _islower - function that checks for lowercase character.
 * Null
 * Return: zero
 */

int _islower(int c);

int main(void)
{
    char test_char = 'n';

    int i = _islower(test_char);

    printf("%d\n", i);

    return (0);
}

int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
		putchar('1');
    }
    else
    {
		putchar('0');
    }

    putchar('\n');
    return (c >= 'a' && c <= 'z');
}
