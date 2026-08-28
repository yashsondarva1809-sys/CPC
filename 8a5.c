#include<stdio.h>
void main()
{
    int i=1,n,even_count=0,odd_count=0;
    
    while (i<=10)
    {
        printf("enter number");
    scanf("%d" ,&n);
       if (i%2==0)
       {
        even_count=even_count+1;
        
       }
       else{
        odd_count=odd_count+1;
       
       }
       i++;
    }
    printf("%d %d" ,even_count,odd_count);
    
    
}