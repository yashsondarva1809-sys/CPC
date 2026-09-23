#include <stdio.h>

void main() {
    int n,ans=0;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %dth array : ", i);
        scanf("%d", &arr[i]);
        if (arr[i] % 3 == 0)
        {
            ans++;
        }
    }
    printf("No. of elements divisible by 3 : %d", ans);
}