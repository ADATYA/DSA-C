#include<stdio.h>

int main()
{
    int arr[50], num,a,b,temp;

    printf("Enter the number of element :");
    scanf("%d", &num);
    printf("Enter %d elements\n",num);

    for (a=0; a < num;a++)
      scanf("%d",&arr[a]);
    for (a=0;a< num -1; a++)
    {
        for (b= 0; b <num - a -1; b++)
        {
            if (arr[b] > arr [ b+1])
            {
                temp = arr[b];
                arr[b]= arr[b+1];
                arr[b+1] = temp;

            }
            
        }
        
    }
    printf("Sorteb array is \n");
    for ( a = 0; a < num; a++)
     printf("%d\n",arr[a]);

    return 0;
}
