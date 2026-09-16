#include <stdio.h>

void main ()

{
    int n, count;
    char a='A';
    for(int i=1;i<=5;i++){
        for (int k = 1; k <= 5-i; k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++)
        {

            if (i%2==0)
            {
                printf("%c ", a);
                a++;
            }else{
                printf("%d ", j);
            }
            
        }
        printf("\n");
    }

}