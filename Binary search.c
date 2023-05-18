
#include<stdio.h>
int main()
{
        int a[50],n,mid,low=0,high,find;
        printf("\nEnter array size : ");
        scanf("%d",&n);
        printf("Enter array element : ");
        for(int i=0; i<n; i++){
                scanf("%d",&a[i]);
        }
        printf("Enter find element : ");
        scanf("%d",&find);
        high=n-1;
        while(low<=high)
        {
                mid=(low+high)/2;
                if(a[mid]==find)
                        break;
                else if(a[mid]<find)
                        low=mid+1;
                else
                        high=mid-1;
        }
        if(low>high)
                printf("Not Found\n");
        else
        printf("Found!! Position : %d\n\n",mid+1);
}