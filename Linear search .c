#include<stdio.h>
int main()
{
    int i,n, find;
    printf("Enyter array size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array element : ");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enyter find element : ");
    scanf("%d",&find);

    for (i = 0; i <n; i++)
    {
        if(a[i]==find){
            printf("Found!! Position : %d",i+1);
            break;
        }
    }
    if (i==n)
    {
        printf("Not Found!!");
    }
}

// 02...

#include<stdio.h>
int main()
{
    int i,n, find;
    printf("Enyter array size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array element : ");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enyter find element : ");
    scanf("%d",&find);

    for (i = 0; i <n; i++)
    {
        if(a[i]==find){
            printf("Found!! Position : %d",i+1);
            break;
        }
    }
    if (i==n)
    {
        printf("Not Found!!");
    }
}
