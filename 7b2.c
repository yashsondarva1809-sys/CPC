#include<stdio.h>
void main()
{
    char ch;
    printf("enter value");
    scanf("%c",&ch);
    ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))?(printf("alphabet")):(printf("not alphabet"));

}