#include<stdio.h>
int main(void) {
int intType;
long longType;
long long longlongType;
float floatType;

printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long: %zu byte\n", sizeof(longType));
printf("Size of long long: %zu bytes\n", sizeof(longlongType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
return (0);
}
