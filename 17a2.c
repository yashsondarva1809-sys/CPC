#include <stdio.h>

void main()
{

    int a = 10;
    int *p = &a;
    printf("Adress1 : %d", p);
    printf("\nValue1 : %d", *p);

    float b = 10.5;
    float *q = &b;
    printf("\nAdress2 : %d", q);
    printf("\nValue2 : %f", *q);

    double c = 10;
    double *r = &c;
    printf("\nAdress3 : %d", r);
    printf("\nValue3 : %lf", *r);

    char d = 'A';
    char *s = &d;
    printf("\nAdress4 : %d", s);
    printf("\nValue4 : %c", *s);
}