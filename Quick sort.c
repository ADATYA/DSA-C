
#include <stdio.h>

int partition(int a[], int lb, int ub){
    int pivot = a[lb];
    int i=lb, j=ub, temp;

    while (i<j)
    {
        while(a[i]<=pivot){
            i++;
        }
        while(a[j]>pivot){
            j--;
        }
        if(i<j){
            temp = a[i];
            a[j] = a[i];
            a[i] = temp;
        }
    }
    temp = a[lb];
    a[lb] = a[j];
    a[j] = temp;

    return j;
}



void quick_sort(int a[], int lb, int ub){
    if(lb<ub){
        int loc = partition(a,lb,ub);
        quick_sort(a,lb,loc-1);
        quick_sort(a,loc+1,ub);
    }
}


int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array element : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    quick_sort(a, 0, n - 1);

    printf("After quick sort The array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}


