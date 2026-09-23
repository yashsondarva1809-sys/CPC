#include <stdio.h>

void main() {
    int n,Negative=0;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %dth array : ", i);
        scanf("%d", &arr[i]);
        if (arr[i] < 0)
        {
            Negative++;
        }
    }
    printf("Negative : %d", Negative);
}