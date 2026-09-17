#include <stdio.h>

void main() {
    int n,sum=0;
    float avg=0;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %dth array : ", i);
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }
    avg= sum/n;
    printf("Sum : %d\nAverage : %f", sum, avg);
}