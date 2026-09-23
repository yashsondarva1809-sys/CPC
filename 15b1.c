#include <stdio.h>

void main() {
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element : ", i);
        scanf("%d", &arr1[i]);
        
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
    {
        if(arr1[i] == arr1[j]){
            for (int k=j; k < n; k++){
                arr1[k]=arr1[k+1];
            }
            j--;
            n--;
        }
        
    }
    for(int i=0; i < n; i++){
        printf("%d ", arr1[i]);
    }
        
    }

}