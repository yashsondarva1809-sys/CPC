#include <stdio.h>

void main ()

{
    int n,sum=0,ans=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for (int j = 1; j <= i; j++)
        {
            sum=sum+j;
        }
        ans=ans+sum;
        sum=0;
    }
    printf("%d", ans);
}