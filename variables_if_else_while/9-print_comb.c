#include <stdio.h>

/**
* main - jeje
* pusheando
* Return:vuelta
*/

int main(void)
{
int n;

for (n = 0; n < 9; n++)
{
	putchar (n);
	if (n < 9)
	{
	putchar (',');
	putchar (' ');
	}
}
putchar('\n');

return (0);

}
