#include <stdio.h>

void main()

{
    int n;
    scanf("%d", &n);
    for(int i=0;i<=9;i++)
	{
        int temp=n,count=0;
        while (temp!=0)
        {
            if (temp%10==i)
            {
                count=count+1;
            }
            temp=temp/10;
        }
        printf("%d : %d\n", i, count);
    }
}