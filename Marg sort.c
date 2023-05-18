
 #include<stdio.h>

void merge(int a[], int lb, int mid, int ub){
    int i=lb, j=mid+1, k=lb, b[ub];

    while (i<=mid && j<=ub)
    {
        if (a[i]<=a[j]){
             b[k] = a[i];
             i++;
        }

        else{
            b[k] = a[j];
            j++;
        }
        k++;
    }

    if(i>mid){
        while (j<=ub)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else{
        while (i<=mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }
    for (k=lb; k<=ub; k++)
    {
        a[k] = b[k];
    }
}

void merge_sort(int a[], int lb, int ub){
    if(lb<ub){
        int mid = (lb+ub)/2;
        merge_sort(a,lb,mid);
        merge_sort(a,mid+1,ub);

        merge(a,lb,mid,ub);
    }
}

 int main()
 {
    int n,i;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array element : ");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    merge_sort(a,0,n-1);
    printf("After merge sort the array is : ");
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }
 }