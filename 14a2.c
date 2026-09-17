#include <stdio.h>

void main() {
    int n,Positive=0,Negative=0;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %dth array : ", i);
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
        {
            Positive++;
        }
        if (arr[i] < 0)
        {
            Negative++;
        }
    }
    printf("Positive : %d\nNegative : %d", Positive, Negative);
}