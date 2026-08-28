#include<stdio.h>
void main()
{
    int a,b,c,ans,largest;
    printf("enter three numbers");
    scanf("%d %d %d" ,&a ,&b ,&c);
   largest=(a>b)? a: (b);   
   ans=largest*c;
   printf("%d" ,ans);
}