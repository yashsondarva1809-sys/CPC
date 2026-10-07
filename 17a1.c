#include <stdio.h>

void main()
{

    int a = 10;
    int *p = &a;
    printf("Adress : %d", p);
    printf("\nValue : %d", *p);
}