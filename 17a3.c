#include <stdio.h>

void main()
{

    int a = 1, b = 9, sum = 0;
    sum = a + b;
    int *p = &sum;

    printf("%d", *p);
}