#include <stdio.h>

void main ()

{
    int n=5;
    for(int i=1;i<=5;i++){
        
        
        for (int j = 1; j <= 5; j++)
        {
            if (i==1 || i==n || j==1 || j==n)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
            
        }
        printf("\n");
    }

}