
#include <stdio.h>
int main()
{
    int n, i, counter = 1, temp;
    printf("\nEnter array size : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array element : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    while (counter<n)
    {
        int k =0;
        for(i=0; i<n-counter; i++){
            if(a[i]>a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                k=1;
            }
        }
        if (k==0)
        {
            break;
        }
        counter++;
    }

    printf("After bubble sort the array is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}