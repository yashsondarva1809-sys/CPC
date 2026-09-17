#include <stdio.h>

void main() {
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %dth array : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Normal : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nReverse : ");
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}