
#include <stdio.h>
int main()
{
    int n, i, j, temp, arr[30];
    printf("Enter array size : ");
    scanf("%d", &n);
    printf("Enter array element : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    printf("\nAfter Insertion Sort(accending Order) The array element  are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}