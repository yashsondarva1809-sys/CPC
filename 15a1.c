#include <stdio.h>

void main() {
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int arr1[n],arr2[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element : ", i);
        scanf("%d", &arr1[i]);
        arr2[i]=arr1[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
        
    }

}