#include <stdio.h>

void main() {
    int arr[20][2];
    for (int i = 1; i < 21; i++)
    {
    
            printf("Enter the roll no. of %d : ", i);
            scanf("%d", &arr[i][0]);
            printf("Enter the marks of %d : ", i);
            scanf("%d", &arr[i][1]);
    }
    for (int i = 1; i < 21; i++)
    {
        
    
            printf("%d ", arr[i][0]);
            printf("%d ", arr[i][1]);
        printf("\n");
    }
    
}