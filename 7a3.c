#include<stdio.h>
void main()
{
    int n,a,b,ans;
    printf("enter two numbers");
    scanf("%d %d" ,&a,&b);
    printf("enter value as per your choice");
    scanf("%d" ,&n);

    switch (n)
    {
    case 1:
        ans=a+b;
        printf("%d",ans);
        break;

        case 2:
        ans=a-b;
        printf("%d",ans);
        break;

        case 3:
        ans=a*b;
        printf("%d",ans);
        break;

        case 4:
        ans=a/b;
        printf("%d",ans);
        break;
    
    default:
        printf("invalid number");
    }
}