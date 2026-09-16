#include <stdio.h>

void main ()

{
    int n,count=1;
    for(int i=1;i<=5;i++){
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", count);
            if (count==1)
            {
                count=0;
            }else{
                count=1;
            }
            
        }
        printf("\n");
    }

}