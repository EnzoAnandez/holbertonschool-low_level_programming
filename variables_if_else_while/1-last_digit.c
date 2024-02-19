#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - jeje
* pusheando
* Return:vuelta
*/
int main(void)
{
int n, e;
srand(time(0));
n = rand() - RAND_MAX / 2;
e = n % 10;
if (n > 6)
{
printf("Last digit of %d is %d and is greater than 5\n", n, e);
}
else if (n == 0)
{
printf("Last digit of %d is 0\n", n);
}
else if (n < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, e);
}
return (0);
}
