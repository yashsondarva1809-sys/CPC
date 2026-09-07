#include<stdio.h>
void main (){

char a,b,ans,choice;
    

    scanf("a b"); 
    scanf("choice");

    if(choice==1)
        ans=a+b;
    printf("%d", ans);

    if(choice==2)
        ans=a-b;
    printf("%d", &ans);

    if(choice==3)
        ans=a*b;
    printf("%d", &ans);

    if(choice==4)
        ans=a/b;
        if(b==0)
        printf("b is invalid");
        else
            printf("%d", &ans);

    printf("divide");

}