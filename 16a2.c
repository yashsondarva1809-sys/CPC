#include <stdio.h>

void main()
{
    int n=3, neg = 0, pos = 0, zero = 0;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the value of %dth array : ", i);
            scanf("%d", &arr[i][j]);
            if (arr[i][j] < 0)
            {
                neg++;
            }
            if (arr[i][j] > 0)
            {
                pos++;
            }
            if (arr[i][j] == 0)
            {
                zero++;
            }
        }
    }
    printf("positive : %d\nnegative : %d\nzeroes : %d", pos, neg, zero);
}