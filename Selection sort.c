
#include <stdio.h>
int main()
{
    int n, i, j, temp;
    printf("Enter array size : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array element : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    printf("\nAfter selection sort the array is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

